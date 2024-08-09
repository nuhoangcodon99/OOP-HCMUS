#pragma once
#include "Employee.h"

class OfficeEmployee:public Employee {
private:
    int workingDays;
public:
    OfficeEmployee();
    OfficeEmployee(int);
    OfficeEmployee(int, string);
    OfficeEmployee(int, string, string);
    OfficeEmployee(int, string, string, string);

    void input();
    void output();
    double salary();
};