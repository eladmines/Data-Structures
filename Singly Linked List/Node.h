//
// Created by mines on 10/11/2023.
//

#ifndef NODE_H
#define NODE_H
#include <iostream>
template <typename T>
class Node{
private:
    Node<T>* next;
    T data;
public:
    Node(T data):next(NULL),data(data){};
    void setNext(Node<T>* nd);
    Node<T>* getNext();
    T getData();

};
#endif