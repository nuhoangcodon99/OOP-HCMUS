#include "AcademicGate.h"

void AcademicGate::setGate() {
    cout << "\nWelcome to Academic Gate";
    cout << "\nInput intellect: ";
    cin >> intellect;
}

bool AcademicGate::passedGate(Prince& prince) {
    if (prince.getPrinceIntellect() >= intellect) {
        return true;
    } else {
        return false;
    }
}
