cmake_minimum_required(VERSION 3.0.0...3.27)
project(guess_game VERSION 1.0.0)
add_executable(main main.cpp)

find_package(fmt REQUIRED)
target_link_libraries(main fmt::fmt)

target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)