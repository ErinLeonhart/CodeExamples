// ****************************************************************************
// queue.h
// ****************************************************************************

#pragma once

#include <iostream>
#include "LList.cpp"

template<typename T>
class Queue : public LList<T>
{
public:
    // *************************************************
    //
    //  add new items to a Queue
    //
    // *************************************************
    void enqueue(T item);

    // *************************************************
    //
    //  remove an item from the Queue
    //
    // *************************************************
    T dequeue();
    T peekFront();
    T peekBack();
    int getSize();

private:
    int m_itemCount = 0;
};
