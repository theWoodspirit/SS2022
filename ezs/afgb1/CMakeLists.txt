cmake_minimum_required(VERSION 3.20)
project(afgb1)

set(CMAKE_CXX_STANDARD 14)

add_executable(afgb1 main.cpp process.c process.h cmake-build-debug/queue.c cmake-build-debug/queue.h)
