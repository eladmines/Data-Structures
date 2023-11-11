//
// Created by mines on 10/11/2023.
//
#include "Node.h"

template<class T>
void Node<T>::setNext(Node<T>* nd){

    next=nd;
}

template<class T>
Node<T>* Node<T>::getNext(){
    if(this == NULL){
        return NULL;
    }
    return next;
}

template<class T>
T Node<T>::getData(){
    return data;
}