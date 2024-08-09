#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
protected:
    int id;
    string fullname;
    string hireday;
    string address;
public:
    Employee();
    Employee(int);
    Employee(int, string);
    Employee(int, string, string);
    Employee(int, string, string, string);

    virtual void input();
    virtual void output();
    virtual double salary();
};