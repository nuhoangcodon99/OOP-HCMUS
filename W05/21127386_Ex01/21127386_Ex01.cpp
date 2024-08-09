#include "Payment.h"

int main() {
    Payment paid;
    paid.setLoan();
    paid.setRate();
    paid.setYear();
    cout << "\nMonthly payment: ";
    cout << paid.monthlyPayment();
    cout << "\nTotal payment: ";
    cout << paid.totalPaid();

    return 0;
}