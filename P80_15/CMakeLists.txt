cmake_minimum_required(VERSION 3.8)
project(P80_15)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CircleQueue.h CircleQueue.cpp)
add_executable(P80_15 ${SOURCE_FILES})