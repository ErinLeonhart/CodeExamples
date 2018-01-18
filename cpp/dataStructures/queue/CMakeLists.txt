cmake_minimum_required(VERSION 2.8)

project(test_Queue)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

ADD_EXECUTABLE(
    Queue
    src/test_Queue.cpp
    )

include_directories(
    include
    src
    )
