#include "UTQueue.h"
#include "Queue.cpp"


TEST_F(UTQueue, enqueue){
    Queue<int> enqueueTest;
    EXPECT_EQ(0, enqueueTest.getSize());

    enqueueTest.enqueue(100);
    EXPECT_EQ(1, enqueueTest.getSize());
}

TEST_F(UTQueue, dequeue){
    Queue<int> dequeueTest;
    dequeueTest.enqueue(1);
    EXPECT_EQ(1, dequeueTest.getSize());
    EXPECT_EQ(1, dequeueTest.dequeue());

    EXPECT_EQ(0, dequeueTest.dequeue());
    EXPECT_EQ(0, dequeueTest.getSize());
}

TEST_F(UTQueue, peekFront){
    Queue<int> peekFrontTest;
    peekFrontTest.enqueue(1);
    EXPECT_EQ(1, peekFrontTest.peekFront());

    peekFrontTest.enqueue(2);
    EXPECT_EQ(1, peekFrontTest.peekFront());
}

TEST_F(UTQueue, peekBack){
    Queue<int> peekBackTest;
    peekBackTest.enqueue(30);
    EXPECT_EQ(30, peekBackTest.peekBack());

    peekBackTest.enqueue(18);
    EXPECT_EQ(18, peekBackTest.peekBack());    
}

TEST_F(UTQueue, getSize){
    Queue<int> getSizeTest;
    EXPECT_EQ(0, getSizeTest.getSize());

    getSizeTest.enqueue(1);
    EXPECT_EQ(1, getSizeTest.getSize());

    getSizeTest.dequeue();
    EXPECT_EQ(0, getSizeTest.getSize());
}
