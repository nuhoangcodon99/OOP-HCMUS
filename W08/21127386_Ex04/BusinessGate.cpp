#include "BusinessGate.h"

void BusinessGate::setGate() {
    cout << "\nWelcome to Business Gate";
    cout << "\nInput price: ";
    cin >> price;
    cout << "\nInput number of products: ";
    cin >> numberOfProducts;
}

bool BusinessGate::passedGate(Prince& prince) {
    if (prince.getPrinceMoney()>=price*numberOfProducts) {
        prince.setPrinceMoney(prince.getPrinceMoney() - price*numberOfProducts);
        return true;
    } else {
        return false;
    }
}