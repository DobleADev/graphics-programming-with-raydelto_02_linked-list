#include "LinkedList.h"

// Node constructor definition
template <typename T>
Node<T>::Node(T val) : data(val), next(nullptr) {}

// LinkedList constructor definition
template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

// LinkedList destructor definition
template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

// insert method definition
template <typename T>
void LinkedList<T>::insert(T val) {
    Node<T>* newNode = new Node<T>(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node<T>* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

// modify method definition
template <typename T>
bool LinkedList<T>::modify(T oldVal, T newVal) {
    Node<T>* current = head;
    while (current != nullptr) {
        if (current->data == oldVal) {
            current->data = newVal;
            return true;
        }
        current = current->next;
    }
    return false;
}

// remove method definition
template <typename T>
bool LinkedList<T>::remove(T val) {
    if (head == nullptr) {
        return false;
    }
    if (head->data == val) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    Node<T>* current = head;
    while (current->next != nullptr && current->next->data != val) {
        current = current->next;
    }
    if (current->next != nullptr) {
        Node<T>* temp = current->next;
        current->next = temp->next;
        delete temp;
        return true;
    }
    return false;
}