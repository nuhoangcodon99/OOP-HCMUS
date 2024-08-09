#include "PowerGate.h"

void PowerGate::setGate() {
    cout << "\nWelcome to Power Gate";
    cout << "\nInput power: ";
    cin >> power;
}

bool PowerGate::passedGate(Prince& prince) {
    if (prince.getPrincePower()>=power) {
        prince.setPrincePower(prince.getPrincePower() - power);
        return true;
    } else {
        return false;
    }
}