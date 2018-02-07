cmake_minimum_required(VERSION 2.8)

project(dataStructures)

set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_BUILD_TYPE Debug)

set(CPP_DATASTRUCTURES "~/GitRepos/CodeExamples/cpp/dataStructures/")
set(CPP_BST "${CPP_DATASTRUCTURES}/binerySearchTree/")
set(CPP_DARRAY "${CPP_DATASTRUCTURES}/dArray/")
set(CPP_LINKLIST "${CPP_DATASTRUCTURES}/linkList/")
set(CPP_QUEUE "${CPP_DATASTRUCTURES}/queue/")
set(CPP_STACK "${CPP_DATASTRUCTURES}/stack/")

include_directories("${CPP_QUEUE}/include 
                     ${CPP_QUEUE}/src")

add_executable(test_Queue ${CPP_QUEUE}/src/test_Queue.cpp)
