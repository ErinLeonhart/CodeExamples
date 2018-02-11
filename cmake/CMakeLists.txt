cmake_minimum_required(VERSION 2.8)

project(dataStructures)

set(CMAKE_CXX_FLAGS "-lgtest -pthread -std=c++11")
set(CMAKE_BUILD_TYPE Debug)

set(CPP_DATASTRUCTURES "~/GitRepos/CodeExamples/cpp/dataStructures/")
set(CPP_TEST "${CPP_DATASTRUCTURES}/test/")

include_directories(${CPP_DATASTRUCTURES}/include
                    ${CPP_DATASTRUCTURES}/src
                    ${CPP_TEST}/include
                    ${CPP_TEST}/src)

add_executable(unitTestMain ${CPP_TEST}/src/unitTestMain.cpp)
