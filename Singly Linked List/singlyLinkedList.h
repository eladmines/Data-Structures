//
// Created by mines on 11/11/2023.
//
#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H
#include <iostream>
#include "Node.cpp"
template<class T>
class singlyLinkedList{
private:
    Node<T>* head;
public:
    singlyLinkedList():head(NULL){};
    void insertNodeEndList(T dataNode);
    void deleteNode(T dataNode);
    void printList();
};
#endif
