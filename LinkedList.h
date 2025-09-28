#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T val);
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();
    ~LinkedList();
    void insert(T val);
    bool modify(T oldVal, T newVal);
    bool remove(T val);
};

#endif