#include "Employee.h"

Employee::Employee() {

}

Employee::Employee(int aId) {
    id=aId;
}

Employee::Employee(int aId, string aFullname) {
    id=aId;
    fullname=aFullname;
}

Employee::Employee(int aId, string aFullname, string aHireday) {
    id=aId;
    fullname=aFullname;
    hireday=aHireday;
}

Employee::Employee(int aId, string aFullname, string aHireday, string aAddress) {
    id=aId;
    fullname=aFullname;
    hireday=aHireday;
    address=aAddress;
}

void Employee::input() {
    do {
        cout << "\nID: ";
        cin >> id;
    } while (id<=0);
    cout << "\nFull name: ";
    cin.ignore(1);
    getline(cin, fullname);
    cout << "\nHire day: ";
    getline(cin, hireday);
    cout << "\nAddress: ";
    getline(cin, address);
}

void Employee::output() {
    cout << "\nID: " << id << endl;
    cout << "\nFull name: " << fullname << endl;
    cout << "\nAddress: " << address << endl;
    cout << "\nHire day: " << address << endl;
    cout << "\nSalary: " << salary() << endl;
}

double Employee::salary() {
    return 0;
}