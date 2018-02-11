// ****************************************************************************
// stack.cpp
// ****************************************************************************
#pragma once

#include "stack.h"

// *************************************************
//
//  add new items to a stack 
//
// *************************************************
template<typename T>
void Stack<T>::push(T item)
{
    // ********************************************
    // use prebuilt function in LList to add
    // ********************************************
    LList<T>::addToHead(item);
    m_stackSize++;
}

template<typename T>
T Stack<T>::peek(){
    if(m_stackSize > 0){
        return LList<T>::peekAtHead();
    }
    return 0;
}

// *************************************************
//
//  add new items to a stack 
//
// *************************************************
template <typename T>
T Stack<T>::pop()
{
    if(m_stackSize > 0){
        T item = LList<T>::peekAtHead();
        LList<T>::removeAtHead();
        m_stackSize--;
        return item;
    }
    return 0;
}

template <typename T>
int Stack<T>::getSize()
{
    return m_stackSize;
}
