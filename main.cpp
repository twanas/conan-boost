#include <boost/asio/io_service.hpp>
#include <boost/asio/steady_timer.hpp>
#include <chrono>
#include <iostream>
#include <thread>

using namespace boost::asio;

void print_threadid() {
    std::cout << std::this_thread::get_id() << '\n';
}

int main() {

  print_threadid();

  io_service ioservice;

  steady_timer timer{ioservice, std::chrono::seconds{3}};
  timer.async_wait([](const boost::system::error_code &ec)
    {print_threadid();}
  );
  ioservice.run();
}

