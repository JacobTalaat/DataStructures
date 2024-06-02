#include "LinkedListLec5.h"

template <class T>
Node<T>::Node() {
    next = 0;
}

template <class T>
Node<T>::Node(T val) {
    value = val;
    next = 0;
}

template <class T>
LinkedListLec5<T>::LinkedListLec5() {
    head = tail = 0;
    count = 0;
}

template <class T>
int LinkedListLec5<T>::Length() {
    return count;
}

template <class T>
void LinkedListLec5<T>::Append(T val) {
    Node<T>* newNode = new Node<T>(val);
    if (head == 0)
        head = tail = newNode;
    else {
        tail->next = newNode;
        tail = newNode;
    }
    count++;
}

template <class T>
T LinkedListLec5<T>::At(int pos) {
    Node<T>* tmp = head;
    for (int i = 0; i < pos; i++)
        tmp = tmp->next;
    return tmp->value;
}

template <class T>
void LinkedListLec5<T>::InsertAt(int pos, T val) {
    Node<T>* newNode = new Node<T>(val);
    Node<T>* tmp = head;
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        if (count == 0)
            tail = newNode;
    }
    else {
        for (int i = 0; i < pos - 1; i++)
            tmp = tmp->next;
        newNode->next = tmp->next;
        tmp->next = newNode;
        if (newNode->next == 0)
            tail = newNode;
    }
    count++;
}

template <class T>
void LinkedListLec5<T>::DeleteAt(int pos) {
    Node<T>* tmp = head;
    if (pos == 0) {
        head = head->next;
        delete tmp;
        if (count == 1)
            tail = 0;
    }
    else {
        for (int i = 0; i < pos - 1; i++)
            tmp = tmp->next;
        Node<T>* del = tmp->next;
        tmp->next = del->next;
        if (del->next == 0)
            tail = tmp;
        delete del;
    }
    count--;
}
