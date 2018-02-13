#pragma once

#include <iostream>
#include "LList.cpp"

template<typename T>
class Stack : public LList<T>
{
public:
    // *************************************************
    //
    //  add new items to a stack 
    //
    // *************************************************
    void push(T item);

    // *************************************************
    //
    //  remove an item from the stack
    //
    // *************************************************
    T pop();
    T peek();
    int getSize();

    int m_stackSize = 0;
};
