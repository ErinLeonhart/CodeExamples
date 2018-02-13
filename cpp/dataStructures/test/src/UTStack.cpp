#include "UTStack.h"
#include "Stack.cpp"


TEST_F(UTStack, push){
    Stack<int> pushTest;
    pushTest.push(10);
    EXPECT_EQ(1, pushTest.getSize());

    pushTest.push(20);
    EXPECT_EQ(2, pushTest.getSize());
}

TEST_F(UTStack, pop){
    Stack<int> popTest;
    EXPECT_EQ(0, popTest.pop());
    
    popTest.push(1);
    popTest.push(2);
    popTest.push(3);
    EXPECT_EQ(3, popTest.pop());
}

TEST_F(UTStack, peek){
    Stack<int> peekTest;
    EXPECT_EQ(0, peekTest.peek());

    peekTest.push(10);
    EXPECT_EQ(10, peekTest.peek());
}

TEST_F(UTStack, getSize){
    Stack<int> getSizeTest;
    EXPECT_EQ(0, getSizeTest.getSize());
}
