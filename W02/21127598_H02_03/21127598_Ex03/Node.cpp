#include "Node.h"

Node::Node(int n) {
    input(n);
    next = nullptr;
}

Node::~Node() {
    delete next;
}

void Node::input(int n) {
    data = n;
}

void Node::output() {
    cout << data << " ";
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node* p) {
    next = p;
}

int Node::getData() {
    return data;
}