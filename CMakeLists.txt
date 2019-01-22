 cmake_minimum_required(VERSION 2.8.12)
 project(conan-boost)

 add_definitions("-std=c++17")

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

 add_executable(ip_list ip_list.cpp)
 add_executable(web_request web_request.cpp)
 add_executable(async_wait async_wait.cpp)
 add_executable(receiver receiver.cpp)
 add_executable(sender sender.cpp)

 target_link_libraries(ip_list ${CONAN_LIBS})
 target_link_libraries(web_request ${CONAN_LIBS})
 target_link_libraries(async_wait ${CONAN_LIBS})
 target_link_libraries(receiver ${CONAN_LIBS})
 target_link_libraries(sender ${CONAN_LIBS})
