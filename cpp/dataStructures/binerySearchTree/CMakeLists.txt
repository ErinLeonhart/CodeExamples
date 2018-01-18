cmake_minimum_required(VERSION 2.8)

project(test_binarySearchTree)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

ADD_EXECUTABLE(
    binarySeachTree
    src/test_binarySearchTree.cpp
    )

include_directories(
    include
    src
    )
