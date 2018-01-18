// ************************************************************************
// dArray.cpp
// ************************************************************************

#include "dArray.h"

// ************************************************************************
// 
// Constructors default/copy/paramatized/destruct
//
// ************************************************************************
template<typename T>
DArray<T>::DArray()
{
    m_intMaxSize = 3;
    m_intItemCount = 0;
    m_pArr = new T[m_intMaxSize]
}

// copy constructor
template<typename T>
DArray<T>::DArray(const DArray& copy)
{
    m_intMaxSize = copy.m_intMaxSize;
    m_intItemCount = 0;
    m_pArr = new T[m_intMaxSize]
    
    for (auto item : copy)
    {
        this->push_back(item);
    }
}

// Paramatized constructor
template<typename T>
DArray<T>::DArray(const int size)
{
    m_intMaxSize = size;
    m_intItemCount = 0;
    m_pArr = new T[m_intMaxSize]

}

// Destructor
template<typename T>
DArray<T>::~DArray()
{
    m_pArr = nullptr;
}

// ************************************************************************
//
// Assignment Operator
//
// ************************************************************************

template<typename T>
DArray<T>::DArray& operator=(const DArrray& rhs)
{
    m_intMaxSize = copy.m_intMaxSize;
    m_intItemCount = 0;
    m_pArr = new T[m_intMaxSize]
    
    for (auto item : rhs)
    {
        this->push_back(item);
    }

    return *this;
}

// ************************************************************************
//
// Pushes an item onto the end of a dynamic array
//
// @param a - the new value of type T to be added to the array
//
// ************************************************************************
template<typename T>
void DArray<T>::push_back(T item)
{
    if(m_intItemCount >= m_intMaxSize)
    {
        grow();
    }

    m_pArr[m_intItemCount] = item;
    m_intItemCount++;
}

// ************************************************************************
//
// Pops an itme off the back of the end of the array
//
// @return - returns the removed value 
//
// ************************************************************************
template<typename T>
T DArray<T>::pop_back()
{
    // Capture the item from the array
    T temp = m_pArr[m_intItemCount - 1]

    // Nullify the last used elemnt in the array
    m_pArr[m_intItemCount - 1] = nullptr;

    // Reduce the item coutn
    m_intItemCount--;

    // return the value being removed
    return item;    
}

// ************************************************************************
//
// clear function - this is used to remove all data from a dynamic array
//
// ************************************************************************
template<typename T>
void DArray<T>::clear()
{
    while (m_intItemCount > 0)
    {
        pop_back()
    }
}

// ************************************************************************
//
// prints all items in an array to the terminal
//
// ************************************************************************
template<typename T>
void DArray<T>::print()
{
    for (auto item : m_pArr)
    {
        std::cout << item << std::endl;
    }
}

// ************************************************************************
//
// increases the size of the array so that it will be allowed to hold more
// values. This is accomplished by increasing the value in m_intMaxSize
//
// ************************************************************************
template<typename T>
void DArray<T>::grow()
{
}
