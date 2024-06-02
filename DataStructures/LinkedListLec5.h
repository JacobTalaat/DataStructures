#pragma once
template <class T>
class Node {
public:
    T value;
    Node* next;

    Node();
    Node(T val);
};

template <class T>
class LinkedListLec5 {
private:
    Node<T>* head;
    Node<T>* tail;
    int count;

public:
    LinkedListLec5();
    int Length();
    void Append(T val);
    T At(int pos);
    void InsertAt(int pos, T val);
    void DeleteAt(int pos);
};



