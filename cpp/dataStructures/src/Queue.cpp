#pragma once

#include "Queue.h"

template<typename T>
void Queue<T>::enqueue(T item) {
    LList<T>::addToTail(item);
    m_itemCount++;
}

template <typename T>
T Queue<T>::dequeue() {
    if (m_itemCount > 0){
        T item = LList<T>::peekAtHead();
        LList<T>::removeAtHead();
        m_itemCount--;
        return item;
    }
    return 0;
}

template <typename T>
T Queue<T>::peekFront() {
    LList<T>::peekAtHead();
}

template <typename T>
T Queue<T>::peekBack() {
    LList<T>::peekAtTail();
}

template <typename T>
int Queue<T>::getSize() {
    return m_itemCount;
}
