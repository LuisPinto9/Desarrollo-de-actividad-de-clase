//
// Created by XS on 9/11/2021.
//

#ifndef OBJETO_LINKEDLIST_H
#define OBJETO_LINKEDLIST_H
#include <vector>
#include <string>
#include "Node.h"

template<class T>

class LinkedList {

public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst(T);

    void addNodeLast(T);

    Node<T>* findNode(std::string);

    T* findInfo(std::string);

    void addNodeBeforeTo(Node<T>*, T);

    void addNodeAfterTo(Node<T>*, T);

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:

    Node<T> *head;
};

#endif //OBJETO_LINKEDLIST_H
