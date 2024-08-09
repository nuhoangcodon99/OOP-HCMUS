#include "SavingBankAccount.h"

void SavingBankAccount::input() {
    BankAccount::input();
    cout << "\nInput rates: ";
    cin >> rates;
    cout << "\nInput period: ";
    cin >> period;
    cout << "\nInput saving months until now: ";
    cin >> monthSince;
}

void SavingBankAccount::output() {
    BankAccount::output();
    cout << "\nRates: " << rates;
    cout << "\nPeriod: " << period;
    cout << "\nSaving months until now: " <<monthSince;
}

void SavingBankAccount::deposit(SavingBankAccount& newAccount) {
    int check;
    if (monthSince >= period) {
        BankAccount::deposit();
        return;
    } else {
        cout << "\nYou are not allowed to deposit money because your saving months is smaller than your period. Do you wanna create another saving account? (Yes:1/No:0)";
        cin >> check;

        if(check==1) {
            newAccount.input();
            return;
        } else return;
    }
}

void SavingBankAccount::withdraw() {
    if (monthSince >= period) {
        BankAccount::withdraw();
        return;
    } else {
        cout << "\nYou are not allowed to withdraw money because your saving months is smaller than your period.";
        return;
    }
}

void SavingBankAccount::withdrawImmediately() {
    if (monthSince >= period) {
        BankAccount::withdraw();
        return;
    }
    else {
        BankAccount::withdraw();
        cout << "\nYour interest rates will be down to 2%. ";
        rates=0.02;
    }
}

double SavingBankAccount::check() {
    return BankAccount::check() + (balance * rates * monthSince)/360;
}

double SavingBankAccount::checkInterest() {
    return (balance * rates * monthSince)/360;
}