#include "Prince.h"

void Prince::input() {
    cout << "\nSet Prince skills";
    cout << "\nEnter prince money: ";
    cin >> money;
    cout << "\nEnter prince intellect: ";
    cin >> intellect;
    cout << "\nEnter prince power: ";
    cin >> power;
}

int Prince::getPrinceMoney() {
    return money;
}

int Prince::getPrinceIntellect() {
    return intellect;
}

int Prince::getPrincePower() {
    return power;
}

void Prince::setPrinceMoney(int m) {
    money = m;
}

void Prince::setPrinceIntellect(int i) {
    intellect = i;
}

void Prince::setPrincePower(int p) {
    power = p;
}

void Prince::output() {
    cout << "\nPrince money: " << money;
    cout << "\nPrince intellect: " << intellect;
    cout << "\nPrince power: " << power;
}