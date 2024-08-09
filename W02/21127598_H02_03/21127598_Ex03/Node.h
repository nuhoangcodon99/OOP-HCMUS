#include <iostream>

using namespace std;

class Node {
private:
    int data;
    Node* next;
public:
    Node(int);
    ~Node();

    void input(int);
    void output();

    Node* getNext();
    void setNext(Node*);

    int getData();
};