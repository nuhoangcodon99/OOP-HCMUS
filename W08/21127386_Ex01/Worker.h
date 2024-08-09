#pragma once
#include "Employee.h"

class Worker:public Employee {
private:
    int numberOfProducts;
public:
    Worker();
    Worker(int);
    Worker(int, string);
    Worker(int, string, string);
    Worker(int, string, string, string);

    void input();
    void output();
    double salary();
};