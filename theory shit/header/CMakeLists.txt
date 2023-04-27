cmake_minimum_required(VERSION 3.0.0)
project(salut VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(salut main.cpp)
target_include_directories(salut PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# ^ iar aici includem fișierul de tip header pentru fișierul main.cpp

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
