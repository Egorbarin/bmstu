cmake_minimum_required(VERSION 3.27)
project(lib)

set(CMAKE_CXX_STANDARD 20)

add_library(lib STATIC libpool.cpp libpool.h)
