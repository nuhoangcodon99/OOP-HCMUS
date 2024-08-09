#include "Worker.h"

Worker::Worker() {

}

Worker::Worker(int aId) {
    id=aId;
} 

Worker::Worker(int aId, string aFullname) {
    id=aId;
    fullname=aFullname;
}

Worker::Worker(int aId, string aFullname, string aHireday) {
    id=aId;
    fullname=aFullname;
    hireday=aHireday;
}

Worker::Worker(int aId, string aFullname, string aHireday, string aAddress) {
    id=aId;
    fullname=aFullname;
    hireday=aHireday;
    address=aAddress;
}

void Worker::input() {
    Employee::input();
    cout << "\nNumber of products: ";
    cin >> numberOfProducts;
}

void Worker::output() {
    Employee::output();
    cout << "\nNumber of products: " << numberOfProducts << endl;
}

double Worker::salary() {
    return Employee::salary() + numberOfProducts*20000;
}