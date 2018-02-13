#pragma once
#include "LList.h"

template<typename T>
LList<T>::LList() {
    pHead = NULL;
    pTail = NULL;    
}

template<typename T>
LList<T>::LList(const LList& copy) {
    pHead = NULL;
    pTail = NULL;
    
    Node<T>* pTrav = copy.pHead;
    while(pTrav != NULL) {
        addToTail(pTrav->data);
        pTrav = pTrav->pNext;
    }
}

template<typename T>
LList<T>::~LList() {}

template<typename T>
LList<T>& LList<T>::operator=(const LList& orig) {
    Node<T>* pTrav = orig.pHead;
    while(pTrav != NULL) {
        addToTail(pTrav->data);
        pTrav = pTrav->pNext;
    }
    return *this;
}

template<typename T>
void LList<T>::addToHead(T item) {
    // 1. Allocate memory for new node.
    Node<T>* pNew = new Node<T>;

    // 2. Set the data item on the new node.
    pNew->data = item;

    // 2.5 If pNew is the first item in the list.
    if(pHead == NULL) {
        pHead = pNew;
        pTail = pNew;
    } else {
        pNew->pNext = pHead;
        pHead->pPrev = pNew;
        pHead = pNew;
    }

    m_intItemCount++;
    
    return;
}

template<typename T>
void LList<T>::addToTail(T item) {    
    // 1. Allocate memory for new node.
    Node<T>* pNew = new Node<T>;

    // 2. Set the data item on the new node.
    pNew->data = item;

    // 2.5 If pNew is the first item in the list.
    if(pHead == NULL) {
        pHead = pNew;
        pTail = pNew;
    } else {
        pNew->pPrev = pTail;
        pTail->pNext = pNew;
        pTail = pNew;
    }
    m_intItemCount++;
}

template<typename T>
int LList<T>::getItemCount() {
    return m_intItemCount;
}

template<typename T>
bool LList<T>::isEmpty() {
    if(m_intItemCount == 0) {
        return true;
    }
    return false;
}

template<typename T>
T LList<T>::peekAtHead() {
    if(m_intItemCount == 0) {
        return 0;
    }
    return pHead->data;
}

template<typename T>
T LList<T>::peekAtTail() {
    if(m_intItemCount == 0) {
        return 0;
    }
    return pTail->data;
}

template<typename T>
void LList<T>::print() {
    Node<T>* pTemp = pHead;

    while(pTemp) {
        std::cout << pTemp->data << std::endl;
        pTemp = pTemp->pNext;
    }
}

template<typename T>
void LList<T>::removeAtHead() {
    if(isEmpty()) {
        return;
    } else if(pHead == pTail) {
        delete pHead;
        pHead = NULL;
        pTail = NULL;
        return;
    } else {
        pHead = pHead->pNext;
        delete pHead->pPrev;
        pHead->pPrev = NULL;
    }
        m_intItemCount--;
}

template<typename T>
void LList<T>::removeAtTail() {
    if(isEmpty()) {
        return;
    } else if(pHead == pTail) {
        delete pHead;
        pHead = NULL;
        pTail = NULL;
        return;
    } else {
        pTail = pTail->pPrev;
        delete pTail->pNext;
        pTail->pNext - NULL;
    }
        m_intItemCount--;
}

template<typename T>
void LList<T>::clear() {
    while(!isEmpty()) {
        removeAtTail();
    }
}
