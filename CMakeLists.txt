cmake_minimum_required(VERSION 3.3)
project(c_preprocessor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c main.h)
add_executable(c_preprocessor ${SOURCE_FILES})