cmake_minimum_required(VERSION 3.0.0)
project(cipher_cezar VERSION 1.0.0)
add_executable(main main.cpp)

find_package(fmt REQUIRED)
target_link_libraries(main fmt::fmt)

