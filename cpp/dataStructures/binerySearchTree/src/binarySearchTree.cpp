// *********************************************************************************
// binarySearchTree.cpp
// *********************************************************************************

#include "binarySearchTree.h"

// *********************************************************************************
// constructors default/copy/destruct
// *********************************************************************************
template<typename T>
binarySearchTree<T>::binarySearchTree()
{
    pRoot = NULL;
}

template<typename T>
binarySearchTree<T>::binarySearchTree(const Node& copy)
{

}

template<typename T>
binarySearchTree<T>::~binarySearchTree()
{
    // TODO
}  

// ********************************************************************************
// overloaded assignemnt operator
// ********************************************************************************                 
template<typename T>
binarySearchTree<T>& binarySearchTree<T>::operator=(const binarySearchTree<T>& rhs)
{
    return *this;
}

// ********************************************************************************
// insert a new node to the tree
// ********************************************************************************
template<typename T>
void binarySearchTree<T>::insert(int key, T item)
{
    // 1. Create a new node
    Node<T>*  pNew = new Node<T>(key, item);

    // 2. Check if the tree is empty, if so then create root
    if(pRoot == NULL)
    {
        pRoot = pNew;
        return;
    }

    // 3. loop until an empty place if found
    Node<T>* pTrav = pRoot;
    Node<T>* pPrev = pTrav;
    
    while(pTrav != NULL)
    {
        // If the keys match, overwrite the data...
        if(key == pTrav->m_key)
        {
            pTrav->data = item;
            return;
        }
        // If the key is greater, travers the right-side of the tree.
        else if(key > pTrav->m_key)
        {
            pPrev = pTrav;
            pTrav = pTrav->pRight;

            // if there's no right node already, insert here
            if(pTrav == NULL)
            {
                pPrev->pRight = pNew;
                return;
            }
        }

        // If they key is less, traverse the left-side of the tree.
        else if(key < pTrav->m_key)
        {
            pPrev = pTrav;
            pTrav = pTrav->pLeft;

            // If there's no left node already, insert here
            if(pTrav == NULL)
            {
                pPrev->pLeft = pNew;
                return;
            }
        }
    }
}

// ********************************************************************************
// retrieve an item from the tree
// ********************************************************************************
template<typename T>
T binarySearchTree<T>::get(int key)
{
    return NULL;
}

// ********************************************************************************
// retrive the root node to the tree
// ********************************************************************************
template<typename T>
Node<T>* binarySearchTree<T>::getRoot()
{
    return pRoot:
}

// *******************************************************************************
// print out all keys using the Breadthwise method
// *******************************************************************************
template<typename T>
void binarySearchTree<T>::printKeysBreadthwise()
{
    std::queue<Node<T>*> nodesToVisit;

    // Queue up the first node
    
}

// *******************************************************************************
// print out all keys starting at the deepest part
// *******************************************************************************
template<typename T>
binarySearchTree<T>::printKeysDepthFirst(OrderType type)
{
}

template<typename T>
void binarySearchTree<T>::preOrder()
{
}

template<typename T>
void binarySearchTree<T>::inOrder()
{
}

template<typename T>
void binarySearchTree<T>::postOrder()
{
}
