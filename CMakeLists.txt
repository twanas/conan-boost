 cmake_minimum_required(VERSION 2.8.12)
 project(conan-boost)

 add_definitions("-std=c++17")

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

 add_executable(conan-boost main.cpp)
 target_link_libraries(conan-boost ${CONAN_LIBS})
