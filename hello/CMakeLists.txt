cmake_minimum_required(VERSION 3.21)
project(hello)
project(cpptime)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hello
        hello.cpp
        hello.h)

add_executable(cpptime
        Cpptime.cpp
        CppTime.h)
