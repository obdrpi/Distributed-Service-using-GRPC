#include <iostream>
#include <memory>
#include <string>
#include <fstream>
#include <cstddef>
#include <iomanip>
#include <grpcpp/grpcpp.h>

#ifdef BAZEL_BUILD
#include "examples/protos/helloworld.grpc.pb.h"
#else
#include "store.grpc.pb.h"
#endif

using grpc::Channel;
using grpc::ClientAsyncResponseReader;
using grpc::ClientContext;
using grpc::CompletionQueue;
using grpc::Status;

using store::ProductQuery;
using store::ProductReply;
using store::ProductInfo;
using store::Store;

class GetProducts {
 public:
   GetProducts(std::shared_ptr<Channel> channel)
       : stub_(Store::NewStub(channel)) {}

  // Assembles the client's payload, sends it and presents the response back
  // from the server.
   ProductReply QueryProducts(const std::string& product) {
    // Data we are sending to the server.
    ProductQuery pquery;
    pquery.set_product_name(product);

    ProductReply preply;

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    ClientContext context;

    // The producer-consumer queue we use to communicate asynchronously with the
    // gRPC runtime.
    CompletionQueue cq;

    // Storage for the status of the RPC upon completion.
    Status status;

    // stub_->PrepareAsyncSayHello() creates an RPC object, returning
    // an instance to store in "call" but does not actually start the RPC
    // Because we are using the asynchronous API, we need to hold on to
    // the "call" instance in order to get updates on the ongoing RPC.
    std::unique_ptr<ClientAsyncResponseReader<ProductReply> > rpc(
        stub_->PrepareAsyncgetProducts(&context, pquery, &cq));

    // StartCall initiates the RPC call
    rpc->StartCall();

    // Request that, upon completion of the RPC, "reply" be updated with the
    // server's response; "status" with the indication of whether the operation
    // was successful. Tag the request with the integer 1.
    rpc->Finish(&preply, &status, (void*)1);
    void* got_tag;
    bool ok = false;
    // Block until the next result is available in the completion queue "cq".
    // The return value of Next should always be checked. This return value
    // tells us whether there is any kind of event or the cq_ is shutting down.
    GPR_ASSERT(cq.Next(&got_tag, &ok));

    // Verify that the result from "cq" corresponds, by its tag, our previous
    // request.
    GPR_ASSERT(got_tag == (void*)1);
    // ... and that the request was completed successfully. Note that "ok"
    // corresponds solely to the request for updates introduced by Finish().
    GPR_ASSERT(ok);

    // Act upon the status of the actual RPC.
    if (status.ok()) {
      return preply;
    } else {
      return preply;
    }
  }

 private:
  // Out of the passed in Channel comes the stub, stored here, our view of the
  // server's exposed services.
  std::unique_ptr<Store::Stub> stub_;
};

int main(int argc, char** argv) {
  // Instantiate the client. It requires a channel, out of which the actual RPCs
  // are created. This channel models a connection to an endpoint (in this case,
  // localhost at port 50051). We indicate that the channel isn't authenticated
  // (use of InsecureChannelCredentials()).

  if(argc < 2)
  {
    std::cout << "Enter the ip:port" << std::endl;
    exit(1);
  }

    std::string address(argv[1]);
      GetProducts getprod(grpc::CreateChannel(
          address, grpc::InsecureChannelCredentials()));

          std::ifstream infile("../test/product_query_list.txt");
          std::string product_name;
          ProductReply prepl;
          ProductInfo *pinfo;
          while(infile >> product_name){
             prepl = getprod.QueryProducts(product_name);
             for (const auto result : prepl.products()) {
              // ProductQueryResult::Bid bid;
                float product_price = result.price();

                std::string vendor_id = result.vendor_id();
                std::cout << "Price :" << std::setprecision (2)<< product_price;
                std::cout << ",Vendor ID :" << vendor_id << std::endl;
             }
          }

    return 0;
}
