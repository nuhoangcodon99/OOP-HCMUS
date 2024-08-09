#include "Queue.h"

void Queue::init(int n) {
    capacity = n;
    p_head = p_tail = NULL;
}

void Queue::enqueue(int x) {
    Node* p_node = new Node;
    p_node->key=x;
    if(isFull()) {
        cout <<"\nThis queue is full";
        return;
    }

    if(p_head==NULL) {
        p_head=p_tail=p_node;
        return;
    }


    p_tail->p_next=p_node;
    p_tail=p_node;
    p_tail->p_next=NULL;
    num++;
}

int Queue::dequeue() {
    Node* temp=p_head;

    p_head=temp->p_next;

    int x=temp->key;
    

    if(isEmpty()) {
        cout <<"\nThis queue is empty";
        return 0;
    }
    delete temp;
    return x;
}

Node* Queue::peek() {
    return p_head;
}

bool Queue::isEmpty() {
    if(p_head==NULL) return true;
    return false;
}

bool Queue::isFull() {
    if(num==capacity) return true;
    return false;
}

void Queue::clear() {
    while(num!=0) {
        dequeue();
    }
}

