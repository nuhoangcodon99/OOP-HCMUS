#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    bool checkLeapYear();
    void Input();

    friend istream& operator >>(istream &in, Date&d);

    Date& operator =(const Date &d);
    friend ostream& operator << (ostream &out, const Date &d);
    Date Tomorrow();
    Date Yesterday();

    bool operator ==(const Date &d);
    bool operator !=(const Date &d);
    bool operator >=(const Date &d);
    bool operator <=(const Date &d);
    bool operator >(const Date &d);
    bool operator <(const Date &d);

    Date operator+(int);
    Date operator-(int);

    Date& operator ++();
    Date operator ++(int);
    Date& operator --();
    Date operator --(int);

    operator int();
    operator long();

    Date& operator +=(int n);
    Date& operator -=(int n);



};