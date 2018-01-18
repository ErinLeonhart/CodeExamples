cmake_minimum_required(VERSION 2.8)

project(test_Stack)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

ADD_EXECUTABLE(
    Stack
    src/test_Stack.cpp
    )

include_directories(
    include
    src
    )
