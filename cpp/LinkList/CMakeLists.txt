cmake_minimum_required(VERSION 2.8)

project(test_LinkList)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

ADD_EXECUTABLE(
    LinkList
    src/test_LinkList.cpp
    )

include_directories(
    include
    src
    )
