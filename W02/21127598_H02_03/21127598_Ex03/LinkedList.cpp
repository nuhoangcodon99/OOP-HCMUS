#include "LinkedList.h"

LinkedList::LinkedList(int n) {
    head = tail = nullptr;
    capacity = n;
}

LinkedList::~LinkedList(){
    clear();
}

void LinkedList::push(int n) {
    if(isFull()) return;
    Node* p = new Node(n);
    if(head == nullptr) {
        head = p;
        tail = p;
        count++;
        return;
    }

    tail->setNext(p);
    tail = tail->getNext();
    count++;
}

int LinkedList::pop() {
    int num = head->getData();
    Node* p = head;
    if(p == tail) {
        head = nullptr;
        tail = nullptr;
        delete p;
        count--;
        return num;
    }
    head = head->getNext();
    delete p;
    count--;
    return num;
}

bool LinkedList::isEmpty() {
    return count == 0 ? true:false;
}

bool LinkedList::isFull() {
    return count == capacity ? true:false;
}

void LinkedList::clear() {
    while(!isEmpty()) {
        cout << "Popping" << endl;
        pop();
    }
}

Node* LinkedList::peek() {
    return head;
}

int LinkedList::getCapacity() {
    return capacity;
}

int LinkedList::getCount() {
    return count;
}

void LinkedList::output() {
    Node* p = head;
    
    while(p) {
        p->output();
        p = p->getNext();
    }
    cout << endl;
    delete p;
}