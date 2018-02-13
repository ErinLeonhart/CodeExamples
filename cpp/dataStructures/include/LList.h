#pragma once

#include <iostream>
#include "Node.cpp"

template<typename T>
class LList {
public:
    // *************************************************
    //
    // constructors default/copy/destruct
    //
    // *************************************************
    LList();
    LList(const LList& copy);
    ~LList();
    
    // *************************************************
    //
    // assignment operator
    //
    // *************************************************
    LList& operator=(const LList& orig);

    // *************************************************
    //
    // add and new node to the LinkList
    //
    // *************************************************
    void addToHead(T item);
    void addToTail(T item);
    
    // *************************************************
    //
    // check count of list items
    //
    // *************************************************
    int getItemCount();
    bool isEmpty();

    // *************************************************
    //
    // Look at a node in the list
    //
    // *************************************************
    T peekAtHead();
    T peekAtTail();

    // *************************************************
    //
    // print all nodes to the user
    //
    // *************************************************
    void print();

    // *************************************************
    //
    // remove items and clear list
    //
    // *************************************************
    void removeAtHead();
    void removeAtTail();
    void clear();

private:
    //**************************************************
    //
    // set starting points to the List
    // 
    // *************************************************
    Node<T>* pHead;
    Node<T>* pTail;
    int m_intItemCount = 0;
};
