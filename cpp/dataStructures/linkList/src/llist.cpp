// *********************************************************************************
// llist.cpp
// *********************************************************************************

#include "llist.h"

// *************************************************
//
// constructors default/copy/destruct
//
// *************************************************
template<typename T>
LList<T>::LList()
{
    pHead = NULL;
    pTail = NULL;    
}

template<typename T>
LList<T>::LList(const LList& copy)
{
    pHead = NULL;
    pTail = NULL;
    
    Node<T>* pTrav = copy.pHead;
    while(pTrav != NULL)
    {
        addToTail(pTrav->data);
        pTrav = pTrav->pNext;
    }
}

template<typename T>
LList<T>::~LList()
{
    clear();
}

// *************************************************
//
// assignment operator
//
// *************************************************
template<typename T>
LList<T>& LList<T>::operator=(const LList& orig)
{
    Node<T>* pTrav = orig.pHead;
    while(pTrav != NULL)
    {
        addToTail(pTrav->data);
        pTrav = pTrav->pNext;
    }
    
    return *this;
}

// *************************************************
//
// add a new node to the Head of the list
//
// *************************************************
template<typename T>
void LList<T>::addToHead(T item)
{
    // 1. Allocate memory for new node.
    Node<T>* pNew = new Node<T>;

    // 2. Set the data item on the new node.
    pNew->data = item;

    // 2.5 If pNew is the first item in the list.
    if(pHead == NULL)
    {
        pHead = pNew;
        pTail = pNew;
        return;
    }else {
        pNew->pNext = pHead;
        pHead->pPrev = pNew;
        pHead = pNew;
    }

    m_intItemCount++;
    
    return;
}

// *************************************************
//
// add a new node to the Tail of the list
//
// *************************************************
template<typename T>
void LList<T>::addToTail(T item)
{    
    // 1. Allocate memory for new node.
    Node<T>* pNew = new Node<T>;

    // 2. Set the data item on the new node.
    pNew->data = item;

    // 2.5 If pNew is the first item in the list.
    if(pHead == NULL)
    {
        pHead = pNew;
        pTail = pNew;
        return;
    }else {
        pNew->pPrev = pTail;
        pTail->pNext = pNew;
        pTail = pNew;
    }
    m_intItemCount++;

}

// *************************************************
//
// check the number of nodes in the list
//
// *************************************************
template<typename T>
int LList<T>::getItemCount()
{
    return m_intItemCount;
}

// *************************************************
//
// check if the list is empty
//
// *************************************************
template<typename T>
bool LList<T>::isEmpty()
{
    if( pHead == NULL)
    {
        return true;
    }
    return false;
}

// *************************************************
//
// Look at a the Head node in the list
//
// *************************************************
template<typename T>
T LList<T>::peekAtHead()
{
    return pHead->data;
}

// *************************************************
//
// Look at a the Tail node in the list
//
// *************************************************
template<typename T>
T LList<T>::peekAtTail()
{
    return pTail->data;
}

// *************************************************
//
// print out all nodes
//
// *************************************************
template<typename T>
void LList<T>::print()
{
    Node<T>* pTemp = pHead;

    while(pTemp)
    {
        std::cout << pTemp->data << std::endl;
        pTemp = pTemp->pNext;
    }
}

// *************************************************
//
// remove a node at the Head of the list
//
// *************************************************
template<typename T>
void LList<T>::removeAtHead()
{
    if(!pHead)
    {
        return;
    }

    if(pHead == pTail)
    {
        delete pHead;
        pHead = NULL;
        pTail = NULL;
        return;
    }

    else
    {
        pHead = pHead->pNext;
        delete pHead->pPrev;
        pHead->pPrev = NULL;
    }

        m_intItemCount--;
}

// *************************************************
//
// remove a node at the Tail of the list
//
// *************************************************
template<typename T>
void LList<T>::removeAtTail()
{
    if(!pHead)
    {
        return;
    }

    if(pHead == pTail)
    {
        delete pHead;
        pHead = NULL;
        pTail = NULL;
        return;
    }
    else
    {
        pTail = pTail->pPrev;
        delete pTail->pNext;
        pTail->pNext - NULL;
    }
        m_intItemCount--;
}

// *************************************************
//
// clear all items from the list
// 
// *************************************************
template<typename T>
void LList<T>::clear()
{
    while(!isEmpty())
    {
        removeAtTail();
    }
}
