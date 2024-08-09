#include "BankAccount.h"

void BankAccount::input() {
    cout << "\nInput account number: ";
    cin >> number;
    cout << "\nInput name: ";
    cin.ignore();
    getline(cin, name);
    cout << "\nInput id: ";
    cin >> id;
    cout << "\nInput balance: ";
    cin >> balance;
}

void BankAccount::output() {
    cout << "\nAccount number: " << number;
    cout << "\nName: " << name;
    cout << "\nID: " << id;
    cout << "\nBalance: " << balance;
}

void BankAccount::deposit() {
    double inputDeposit;
    cout << "\nInput an amount of money you wanna deposit: ";
    cin >> inputDeposit;
    balance=balance+inputDeposit;
}

void BankAccount::withdraw() {
    double outputDeposit=0;

    do {
        if (balance - outputDeposit < 50000) {
            cout << "\nPlease withdraw the smaller amount: ";
        }
        cout << "\nInput the amount of money you wanna withdraw: ";
        cin >> outputDeposit;
    } while (balance - outputDeposit < 50000);
    balance=balance-outputDeposit;
}

double BankAccount::check() {
    return balance;
}