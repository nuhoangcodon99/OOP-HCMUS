#include "Castle.h"

Castle::~Castle() {
    for (int i=0; i<listGate.size(); i++) {
        delete listGate[i];
        listGate[i]=NULL;
    }
}


void Castle::input() {
    cout << "\nWelcome to Rescue the Princess";
    int n;
    int type;
    Gate* gate;

    cout << "\nInput number of gates: ";
    cin >> n;

    cout << "\nInput information of each gate";
    cout << "\n--------------------------------";
    for (int i = 0; i< n; i++) {
        cout << "\nType of gate (1: Business Gate, 2: Academic Gate, 3: Power Gate): ";
        cin >> type;
        if (type == 1) {
            gate = new BusinessGate;
        }
        else if (type == 2) {
            gate = new AcademicGate;
        }
        else if (type == 3) {
            gate = new PowerGate;
        }
        gate->setGate();
        listGate.push_back(gate);
        cout << "\n--------------------------------";
    }
}

bool Castle::checkGame(Prince& prince) {
    for (int i=0; i<listGate.size(); i++) {
        if(listGate[i]->passedGate(prince)==false) {
            return false;
        }
    }
    return true;
}