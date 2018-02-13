#include "gtest/gtest.h"
#include "UTQueue.cpp"
#include "UTStack.cpp"
#include "UTLList.cpp"


int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
