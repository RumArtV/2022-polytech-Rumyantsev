cmake_minimum_required(VERSION 3.16)
project(compiler02)
set(CMAKE_CXX_STANDART 14)
add_executable(hello_world.s func.cpp func.h hello_world.cpp)
