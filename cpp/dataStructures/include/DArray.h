// ************************************************************************
// dArray.h
// ************************************************************************

#pragma once

#include <iostream>

template<typename T>
class DArray
{
    public:
        // ********************************************************************
        // 
        // Constructors default/copy/paramatized/destruct
        //
        // ********************************************************************
        DArray();
        DArray(const DArray& copy);
        DArray(const int size);
        ~DArray();

        // ********************************************************************
        //
        // Assignment Operator
        //
        // ********************************************************************
        DArray& operator=(const DArrray& rhs);

        // ********************************************************************
        //
        // Pushes an item onto the end of a dynamic array
        //
        // @param a - the new value of type T to be added to the array
        //
        // ********************************************************************
        void push_back(T item);
        
        // ********************************************************************
        //
        // Pops an itme off the back of the end of the array
        //
        // @return - returns the removed value 
        //
        // ********************************************************************
        T pop_back();

        // ********************************************************************
        //
        // clear function - this is used to remove all data from a dynamic
        // array
        //
        // ********************************************************************
        void clear();


        // ********************************************************************
        //
        // prints all items in an array to the terminal
        //
        // ********************************************************************
        void print();
        
    private:

        // ********************************************************************
        //
        // increases the size of the array so that it will be allowed to hold
        //
        // more
        // values. This is accomplished by increasing the value in m_intMaxSize
        //
        // ********************************************************************
        void grow();

        // ********************************************************************
        //
        // Data members used to control the size of an array and track items
        // within
        //
        // ********************************************************************
        T* m_pArr;
        int m_intItemCount;
        int m_intMaxSize;
};
