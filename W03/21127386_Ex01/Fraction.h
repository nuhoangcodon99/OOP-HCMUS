#include <iostream>
using namespace std;

class Fraction {
    int num;
    int den;
public:

    void input();
    int gcd(int, int);
    void reduce();
    Fraction operator =(const Fraction &f);

    friend ostream& operator <<(ostream& out,const Fraction &f);

    Fraction operator +(Fraction f);
    Fraction operator -(Fraction f);
    Fraction operator *(Fraction f);
    Fraction operator /(Fraction f);

    bool operator ==(Fraction f);
    bool operator !=(Fraction f);
    bool operator >=(Fraction f);
    bool operator >(Fraction f);
    bool operator <=(Fraction f);
    bool operator <(Fraction f);

    Fraction operator +(int n);
    Fraction operator -(int n);
    friend Fraction operator *(int n, Fraction f);
    friend Fraction operator +(int n, Fraction f);

    void operator +=(Fraction f);
    void operator -=(Fraction f);
    void operator *=(Fraction f);
    void operator /=(Fraction f);

    Fraction operator ++();
    Fraction operator ++(int);
    Fraction operator --();
    Fraction operator --(int);

    operator float() { return (float) num/den; }
};