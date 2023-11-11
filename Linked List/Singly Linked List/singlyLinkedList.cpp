//
// Created by mines on 10/11/2023.
//
#include <iostream>
#include <stdio.h>
#include "singlyLinkedList.h"

using namespace std;

template<class T>
void singlyLinkedList<T>::insertNodeEndList(T dataNode){
    Node<T>* nd = new Node<T>(dataNode);
    Node<T>* temp = singlyLinkedList<T>::head;
    if(head == NULL){
        head=nd;
    }
    else {
        while (temp->getNext() != NULL) {
            temp = temp->getNext();
        }
        temp->setNext(nd);
    }
}
template<class T>
void singlyLinkedList<T>::deleteNode(T dataNode){
    Node<T>* temp = singlyLinkedList<T>::head;
    while (temp->next != NULL || getData(getNext(temp)) == dataNode) {
        temp = temp->next;
    }
        Node<T>* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
}
template<class T>
void singlyLinkedList<T>::printList(){
    Node<T>* temp = singlyLinkedList<T>::head;
    if(temp == NULL){
        cout << "Empty List" << endl;
    }
    while (temp != NULL) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

int main(){
    singlyLinkedList<int>* list = new singlyLinkedList<int>();

    list->insertNodeEndList(1);
    list->insertNodeEndList(2);
    list->insertNodeEndList(3);
    list->printList();

    getchar();
}