#include "Payment.h"

Payment::Payment() {

}

Payment::~Payment() {

}

void Payment::setLoan() {
    cout << "\nEnter loan: ";
    cin >> loan;
}

void Payment::setRate() {
    cout <<"\nEnter rate: ";
    cin >> rate;
}

void Payment::setYear() {
    cout <<"\nEnter year: ";
    cin >> years;
}

double Payment:: monthlyPayment() {
    double monthlyPayment;
    double term;
    term=pow((1+rate/12), 12*years);
    monthlyPayment=(loan*(rate/12)*term)/(term-1);
    return monthlyPayment;
}

double Payment::totalPaid() {
    double total;
    total = (this->monthlyPayment())*12*years;
    return total;
}

