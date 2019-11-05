#include <memory>
#include <string>
#include <iostream>

#include <iostream>
#include <memory>
#include <string>
#include <fstream>
#include <cstddef>
#include <iomanip>
#include <grpcpp/grpcpp.h>

#include "store.grpc.pb.h"
#include "vendor.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using store::ProductQuery;
using store::ProductReply;
using store::ProductInfo;
using store::Store;

using vendor::Vendor;
using vendor::BidQuery;
using vendor::BidReply;

class GetProductBids{
 public:
   GetProductBids(std::shared_ptr<Channel> channel)
       : stub_(Vendor::NewStub(channel)) {}

    BidReply QueryVendors(const std::string& product) {
      BidQuery bquery;

      bquery.set_product_name(product);

      BidReply breply;

      ClientContext context;

      Status status = stub_->getProductBid(&context, bquery, &breply);

      if (status.ok()) {
        return breply;
      } else {
        std::cout << status.error_code() << ": " << status.error_message()
                  << std::endl;
        return breply;
      }
    }
 private:
  std::unique_ptr<Vendor::Stub> stub_;

};

class storeImpl final : public Store::Service{
   Status getProducts(ServerContext* context, const ProductQuery* request, ProductReply* response) override {
// Remove the absoulte paths
     std::ifstream infile("/home/no-one/AOS/project3/cs6210Project3/src/vendor_addresses.txt");
     std::string address, vendor_id;
     double price;
     std::string name = request->product_name();
     while (infile >> address) {
       GetProductBids getbids(grpc::CreateChannel(
           address, grpc::InsecureChannelCredentials()));

           BidReply bid = getbids.QueryVendors(name);
           vendor_id = bid.vendor_id();
           price = bid.price();

           ProductInfo *pinfo = response->add_products();
      		 pinfo->set_vendor_id(vendor_id);
      		 pinfo->set_price(price);

     }
		 return Status::OK;
	 }
};

void RunServer(std::string server_address){


	storeImpl serv;
	ServerBuilder builder;

	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&serv);
	std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;
	server->Wait();

}

int main(int argc, char** argv) {
	//std::cout << "I 'm not ready yet!" << std::endl;
	//return EXIT_SUCCESS;
  if(argc < 3)
  {
	std::cout << "Need 2 arguments - 1) Address 2) NUM_THREADS" << std::endl;
	exit(1);
  }

  std::string address(argv[1]);

  RunServer(address);
  return 0;
}
