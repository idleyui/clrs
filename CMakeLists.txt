# cmake_minimum_required(VERSION <specify CMake version here>)
project(clrs)

set(CMAKE_CXX_STANDARD 11)

add_executable(clrs test/main.cpp)
add_executable(runtime Ch01_The_Role_of_Algorithms_in_Computing/runtime.cpp)