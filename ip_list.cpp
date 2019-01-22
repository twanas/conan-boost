
#include <boost/asio/io_service.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ip/host_name.hpp>
#include <iostream>

using namespace boost::asio;
using namespace boost::asio::ip;

io_service ioservice;
tcp::resolver resolv{ioservice};
tcp::socket tcp_socket{ioservice};
std::array<char, 4096> bytes;

int main() {
  tcp::resolver::query query{boost::asio::ip::host_name(), ""};
  tcp::resolver::iterator it = resolv.resolve(query);
  while(it != tcp::resolver::iterator()) {
    std::cout << boost::asio::ip::host_name() << " : " << (it++)->endpoint().address();
  }
  ioservice.run();
}