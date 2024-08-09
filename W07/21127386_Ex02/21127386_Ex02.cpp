#include "SavingBankAccount.h"

int main() {
    SavingBankAccount account1;
    SavingBankAccount create;

    account1.input();
    account1.output();
    account1.deposit(create);
    account1.withdraw();
    account1.withdrawImmediately();
    cout << "\nCurrent balance: " << account1.check();
    cout << "\nInterest: " << account1.checkInterest();

    return 0;
}