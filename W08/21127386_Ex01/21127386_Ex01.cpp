#include "Company.h"


int main() {
    Company c;
    c.inputList();
    c.printInfo();
    cout << c.totalSalary();
    cout << "\nList of employee have the highest salary: ";
    c.highestSalary();

    return 0;
}