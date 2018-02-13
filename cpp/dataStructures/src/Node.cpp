// ****************************************************************************
// node.cpp
// ****************************************************************************
#pragma once
#include "Node.h"

// *************************************************
//
// constructors default/copy/destruct
// 
// *************************************************
template<typename T>
Node<T>::Node() {
    pNext = NULL;
    pPrev = NULL;
}

template<typename T>
Node<T>::Node(const Node& copy) {
    Node<T> *pNew = new Node;
    pNew->data = copy->data;
    }

template<typename T>
Node<T>::Node(const T item) {
    pNext = NULL;
    pPrev = NULL;
    data = item;
}

template<typename T>
Node<T>::~Node() {}
