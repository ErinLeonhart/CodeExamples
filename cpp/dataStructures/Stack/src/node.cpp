// *********************************************************************************
// node.cpp
// *********************************************************************************

#include "node.h"

// *************************************************
//
// constructors default/copy/destruct
// 
// *************************************************
template<typename T>
Node<T>::Node()
{
    pNext = NULL;
    pPrev = NULL;
}

template<typename T>
Node<T>::Node(const Node& copy){}

template<typename T>
Node<T>::Node(const T item)
{
    pNext = NULL;
    pPrev = NULL;
    data = item;
}

template<typename T>
Node<T>::~Node(){}
