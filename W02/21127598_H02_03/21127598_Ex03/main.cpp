#include "LinkedList.h"

int main() {
    LinkedList LL(5);
    if(LL.isEmpty()) 
        cout << "Linkedlist is now empty" << endl;
    
    int i = 0;
    while(!LL.isFull()) {
        LL.push(i);
        i++;
    }

    cout << "Linkedlist is now full" << endl;
    
    LL.output();

    cout << "Peeking at linked list: " << endl;
    cout << LL.peek()->getData() << endl;
    cout << "Popping head of linked list: " << endl;
    cout << LL.pop() << endl;
    cout << endl;

    cout << "New linked list: " << endl;
    LL.output();

    LL.clear();
    cout << "Linked list node count: " << LL.getCount() << endl;

    return 0;
}