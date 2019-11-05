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
using grpc::ClientContext;
using grpc::Status;

using store::ProductQuery;
using store::ProductReply;
using store::ProductInfo;
using store::Store;

class GetProducts{
 public:
   GetProducts(std::shared_ptr<Channel> channel)
       : stub_(Store::NewStub(channel)) {}

    ProductReply QueryProduct(const std::string& product) {
      ProductQuery pquery;
      pquery.set_product_name(product);

      ProductReply preply;

      ClientContext context;

      Status status = stub_->getProducts(&context, pquery, &preply);

      if (status.ok()) {
        return preply;
      } else {
        std::cout << status.error_code() << ": " << status.error_message()
                  << std::endl;
        return preply;
      }
    }
 private:
  std::unique_ptr<Store::Stub> stub_;

};

int main(int argc, char *argv[]){

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
         prepl = getprod.QueryProduct(product_name);
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
