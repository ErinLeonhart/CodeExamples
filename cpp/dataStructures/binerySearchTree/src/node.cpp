// *********************************************************************************
// node.cpp
// *********************************************************************************

#include "node.h"

template<typename T>
Node<T>::Node()
{
    pLeft = NULL;
    pRight = NULL;
}

template<typename T>
Node<T>::Node(const int key, const T item)
{
    pLeft = NULL;
    pRight = NULL;
    m_key - key;
    data = item;
}

template<typename T>
Node<T>::~Node()
{
}
