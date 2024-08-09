#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* p_next;
};

class Queue {
public:
    Node* p_head;
    Node* p_tail;
    int capacity;
    int num=0;

    void init(int); //create an empty queue.
    void enqueue(int); //add an integer to queue.
    int dequeue(); //remove the oldest element from queue, return the value of the removed one.
    Node* peek();
    bool isEmpty(); //check whether a queue is empty or not.
    bool isFull(); 
    void clear();
};