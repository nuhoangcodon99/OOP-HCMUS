#pragma once
#include "Node.h"

class LinkedList {
private:
    Node* head;
    Node* tail;
    int capacity;
    int count = 0;
public:
    LinkedList(int);
    ~LinkedList();

    int getCount();
    int getCapacity();

    void output();

    void push(int);
    int pop();
    Node* peek();
    bool isEmpty();
    bool isFull();
    void clear();
};