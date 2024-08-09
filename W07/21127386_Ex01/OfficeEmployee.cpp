#include "OfficeEmployee.h"

OfficeEmployee::OfficeEmployee() {
}

OfficeEmployee::OfficeEmployee(int aId) {
    id=aId;
} 

OfficeEmployee::OfficeEmployee(int aId, string aFullname) {
    id=aId;
    fullname=aFullname;
}

OfficeEmployee::OfficeEmployee(int aId, string aFullname, string aHireday) {
    id=aId;
    fullname=aFullname;
    hireday=aHireday;
}

OfficeEmployee::OfficeEmployee(int aId, string aFullname, string aHireday, string aAddress) {
    id=aId;
    fullname=aFullname;
    hireday=aHireday;
    address=aAddress;
}

void OfficeEmployee::input() {
    Employee::input();
    cout << "\nNumber of working days: ";
    cin >> workingDays;
}

void OfficeEmployee::output() {
    Employee::output();
    cout << "\nNumber of working days: " << workingDays << endl;
}

double OfficeEmployee::salary() {
    return Employee::salary() + workingDays*300000;
}