cmake_minimum_required(VERSION 3.8)
project(KMPAL)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp kaml.cpp)
add_executable(KMPAL ${SOURCE_FILES})