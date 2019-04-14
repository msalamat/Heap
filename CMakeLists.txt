cmake_minimum_required(VERSION 3.13)
project(Heap)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=c++14 -Werror")

add_executable(Heap main.cpp Heap.hpp Singleton.hpp Patient.hpp)