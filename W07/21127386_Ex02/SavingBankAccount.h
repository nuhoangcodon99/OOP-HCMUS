#pragma once
#include "BankAccount.h"

class SavingBankAccount:public BankAccount {
private:
    double rates;
    int period;
    int monthSince;
public:
    void input();
    void output();
    void deposit(SavingBankAccount&);
    void withdraw();
    void withdrawImmediately();
    double check();
    double checkInterest();
};