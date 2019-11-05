#include <memory>
#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <fstream>
#include <cstddef>
#include <iomanip>
#include <grpcpp/grpcpp.h>
#include <grpc/support/log.h>

#include <chrono>


#include "ThreadPool.h"
#include "store.grpc.pb.h"
#include "vendor.grpc.pb.h"

using grpc::Server;
using grpc::ServerAsyncResponseWriter;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerCompletionQueue;
using grpc::Status;

using store::ProductQuery;
using store::ProductReply;
using store::ProductInfo;
using store::Store;

using grpc::Channel;
using grpc::ClientAsyncResponseReader;
using grpc::ClientContext;
using grpc::CompletionQueue;
using grpc::Status;


using vendor::Vendor;
using vendor::BidQuery;
using vendor::BidReply;

class GetProductBids{
 public:
   GetProductBids(std::shared_ptr<Channel> channel)
       : stub_(Vendor::NewStub(channel)) {}

   BidReply QueryVendors(const std::string& product) {

    BidQuery bidquery;
    bidquery.set_product_name(product);

    BidReply bidreply;

    ClientContext context;

    CompletionQueue cq;

    Status status;

    std::unique_ptr<ClientAsyncResponseReader<BidReply> > rpc(
        stub_->PrepareAsyncgetProductBid(&context, bidquery, &cq));

    // StartCall initiates the RPC call
    rpc->StartCall();

    rpc->Finish(&bidreply, &status, (void*)1);
    void* got_tag;
    bool ok = false;

    GPR_ASSERT(cq.Next(&got_tag, &ok));

    GPR_ASSERT(got_tag == (void*)1);

    GPR_ASSERT(ok);

    if (status.ok()) {
      return bidreply;
    } else {
      return bidreply;
    }
  }

 private:

  std::unique_ptr<Vendor::Stub> stub_;
};


class ServerImpl final {
 public:
  ~ServerImpl() {
    server_->Shutdown();
    // Always shutdown the completion queue after the server.
    cq_->Shutdown();
  }


  void Run(std::string address, int threads) {
    std::string server_address(address);

    ServerBuilder builder;

    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service_);
    cq_ = builder.AddCompletionQueue();
    server_ = builder.BuildAndStart();
    std::cout << "Server listening on " << server_address << std::endl;

    HandleRpcs(threads);
  }

 private:
  class CallData {
   public:
    CallData(Store::AsyncService* service, ServerCompletionQueue* cq)
        : service_(service), cq_(cq), responder_(&ctx_), status_(CREATE) {

      Proceed();
    }

    void Proceed() {
      if (status_ == CREATE) {
        status_ = PROCESS;


        service_->RequestgetProducts(&ctx_, &request_, &responder_, cq_, cq_,
                                  this);
      } else if (status_ == PROCESS) {

        new CallData(service_, cq_);

        std::ifstream infile("vendor_addresses.txt");
        std::string address, vendor_id;
        double price;
        std::string name = request_.product_name();

      while (infile >> address) {
        GetProductBids getbids(grpc::CreateChannel(
            address, grpc::InsecureChannelCredentials()));

            BidReply bid = getbids.QueryVendors(name);
            vendor_id = bid.vendor_id();
            price = bid.price();

            ProductInfo *pinfo = reply_.add_products();
            pinfo->set_vendor_id(vendor_id);
            pinfo->set_price(price);

      }
        status_ = FINISH;
        responder_.Finish(reply_, Status::OK, this);
      } else {
        GPR_ASSERT(status_ == FINISH);

        delete this;
      }
    }

   private:
    Store::AsyncService* service_;
    ServerCompletionQueue* cq_;
    ServerContext ctx_;

    ProductQuery request_;
    ProductReply reply_;

    ServerAsyncResponseWriter<ProductReply> responder_;


    enum CallStatus { CREATE, PROCESS, FINISH };
    CallStatus status_;  // The current serving state.
  };

  // This can be run in multiple threads if needed.
  void HandleRpcs(int threads) {
    // Spawn a new CallData instance to serve new clients.
    new CallData(&service_, cq_.get());
    void* tag;  // uniquely identifies a request.
    bool ok;

    ThreadPool pool(threads);

    while (true) {
      // Block waiting to read the next event from the completion queue. The
      // event is uniquely identified by its tag, which in this case is the
      // memory address of a CallData instance.
      // The return value of Next should always be checked. This return value
      // tells us whether there is any kind of event or cq_ is shutting down.

      GPR_ASSERT(cq_->Next(&tag, &ok));
      GPR_ASSERT(ok);
      pool.enqueue([tag] {
      static_cast<CallData*>(tag)->Proceed();
    });
    //  );
    }
  }

  std::unique_ptr<ServerCompletionQueue> cq_;
  Store::AsyncService service_;
  std::unique_ptr<Server> server_;
};

int main(int argc, char** argv) {
  if(argc < 3)
  {
	std::cout << "Need 2 arguments - 1) Address 2) NUM_THREADS" << std::endl;
	exit(1);
  }

  std::string address(argv[1]);
  int threads = atoi(argv[2]);
  
  ServerImpl server;
  server.Run(address, threads);

  return 0;
}
