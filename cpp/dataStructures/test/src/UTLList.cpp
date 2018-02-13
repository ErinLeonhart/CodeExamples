#include "UTLList.h"
#include "LList.cpp"

TEST_F(UTLList, addToHead) {
    LList<int> addHeadTest;
    addHeadTest.addToHead(10);
    EXPECT_EQ(1, addHeadTest.getItemCount());
    EXPECT_EQ(10, addHeadTest.peekAtHead());

    addHeadTest.addToHead(20);
    EXPECT_EQ(2, addHeadTest.getItemCount());
    EXPECT_EQ(20, addHeadTest.peekAtHead());
}

TEST_F(UTLList, addToTail) {
    LList<int> addTailTest;
    addTailTest.addToTail(10);
    EXPECT_EQ(1, addTailTest.getItemCount());
    EXPECT_EQ(10, addTailTest.peekAtTail());

    addTailTest.addToTail(20);
    EXPECT_EQ(2, addTailTest.getItemCount());
    EXPECT_EQ(20, addTailTest.peekAtTail());
}

TEST_F(UTLList, isEmpty) {
    LList<int> emptyTest;
    EXPECT_TRUE(emptyTest.isEmpty());

    emptyTest.addToHead(2);
    EXPECT_FALSE(emptyTest.isEmpty());
}

TEST_F(UTLList, getItemCount) {
    LList<int> iCountTest;
    EXPECT_EQ(0, iCountTest.getItemCount());

    iCountTest.addToHead(2);
    EXPECT_EQ(1, iCountTest.getItemCount());
}

TEST_F(UTLList, peekAtHead) {
    LList<int> peekHeadTest;
    EXPECT_EQ(0, peekHeadTest.peekAtHead());
    
    peekHeadTest.addToHead(1);
    EXPECT_EQ(1, peekHeadTest.peekAtHead());

    peekHeadTest.addToTail(2);
    EXPECT_EQ(1, peekHeadTest.peekAtHead());
}

TEST_F(UTLList, peekAtTail) {
    LList<int> peekTailTest;
    EXPECT_EQ(0, peekTailTest.peekAtTail());
    
    peekTailTest.addToTail(1);
    EXPECT_EQ(1, peekTailTest.peekAtTail());

    peekTailTest.addToHead(2);
    EXPECT_EQ(1, peekTailTest.peekAtTail());
}

TEST_F(UTLList, print) {
}

TEST_F(UTLList, removeAtHead) {}

TEST_F(UTLList, removeAtTail) {}

TEST_F(UTLList, clear) {}

TEST_F(UTLList, copyLList) {}

TEST_F(UTLList, assignLList) {}
