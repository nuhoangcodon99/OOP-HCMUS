#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    long int number;
    string name;
    long int id;
    double balance;
public:
    virtual void input();
    virtual void output();
    virtual void deposit();
    virtual void withdraw();
    virtual double check();
};