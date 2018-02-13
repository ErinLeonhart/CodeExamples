// ****************************************************************************
// binarySearchTree.h
// ****************************************************************************

#pragma once

#include "node.cpp"
#include <iostream>
#include <stack>
#include <queue>

template<typename T>
class binarySearchTree
{
    public:
        // *************************************************
        //
        // constructors default/copy/paramatized/destruct
        //
        // *************************************************
        binarySearchTree();
        binarySearchTree(const Node& copy);
        ~binarySearchTree();

        // *************************************************
        //
        // Tree operators
        //
        // *************************************************
        void insert(int key, T itme);
        void remove(int key);
        T get(int key);
        Node<T>* getRoot();
        
        // *************************************************
        //
        // print all keys
        //
        // *************************************************
        void printKeysBreadthwise();

        enum OrderType {PRE_ORDER, IN_ORDER, POST_ORDER};
        void printKeysDepthFirst(OrderType type);

    private:
        void preOrder();
        void inOrder();
        void postOrder();

        Node<T>* pRoot;
};
