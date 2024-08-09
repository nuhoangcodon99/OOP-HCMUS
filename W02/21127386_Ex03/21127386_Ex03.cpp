#include "Queue.h"

int main() {
    Queue q;
    int n;
    cout << "\nEnter capacity: ";
    cin >> n;
    q.init(n);
    for (int i=0; i<n; i++) {
        int temp;
        cout <<"\nEnter value: ";
        cin >> temp;
        q.enqueue(temp);
    }

    Node*p=q.p_head;
    cout <<"\nQueue: ";
    while (p!=NULL) {
        cout << p->key << "\t";
        p=p->p_next;
    }

    cout <<"\nDequeue: ";
    cout << q.dequeue();

    cout <<"\nDequeue: ";
    cout << q.dequeue();


    cout <<"\nPeeking: ";
    cout << q.peek()->key;

    cout <<"\nNew queue: ";

    p=q.p_head;
    while (p!=NULL) {
        cout << p->key << "\t";
        p=p->p_next;
    }

    cout <<"\nClear: ";
    q.clear();
    while (p!=NULL) {
        cout << p->key << "\t";
        p=p->p_next;
    }


    delete p;
    return 0;
}