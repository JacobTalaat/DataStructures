#include "StackLec2.h"

StackLec2::StackLec2() {
    capacity = 10;
    elements = 0;
    arr = new int[capacity];
}

bool StackLec2::IsEmpty() {
    return (elements == 0);
}

int StackLec2::length() {
    return elements;
}

void StackLec2::push(int val) {
    if (elements == capacity) {
        Expand();
    }
    arr[elements] = val;
    elements++;
}

void StackLec2::pop() {
    if (elements > 0) {
        elements--;
    }
}

int StackLec2::top() {
    if (elements > 0) {
        return arr[elements - 1];
    }
    return -1; // Undefined behavior, better to throw an exception or handle error
}

void StackLec2::Expand() {
    int newCapacity = capacity + 5;
    int* tmp = new int[newCapacity];
    for (int i = 0; i < elements; i++) {
        tmp[i] = arr[i];
    }
    delete[] arr;
    arr = tmp;
    capacity = newCapacity;
}
