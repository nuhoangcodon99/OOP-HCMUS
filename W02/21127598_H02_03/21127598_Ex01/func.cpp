#include "func.h"

Fraction::Fraction() {

}

void Fraction::input() {
    cout << "Numerator: ";
    cin >> num;
    cout << "Denominator: ";
    cin >> denom;
}

void Fraction::output() {
    if (denom == 1) cout << num << endl;
    else cout << num << "/" << denom << endl;
}

int Fraction::GCD(int a, int b) {
    if (a == b) return a;
    if (a > b) return GCD(a - b, b);
    else return GCD(a, b - a);
}

void Fraction::reduce() {
    int gcd = GCD(num, denom);
    num /= gcd;
    denom /= gcd;
}

int Fraction::compare(Fraction f1, Fraction f2)
{
    if (f1.num == f2.num && f1.denom == f2.denom) return 0;
    else return f1.num * f2.denom > f2.num * f1.denom ? 1 : -1;
}

bool Fraction::isPos()
{   
    return num * denom > 0;
}

bool Fraction::isNeg()
{
    return num * denom < 0;
}

bool Fraction::isZero()
{
    return num == 0 ? true : false;
}

Fraction Fraction::addFrac(Fraction f2) {
    Fraction f;
    f.num = num*f2.denom + f2.num*denom;
    f.denom = denom*f2.denom;

    f.reduce();

    return f;
}

Fraction Fraction::subFrac(Fraction f2) {
    Fraction f;
    f.num = num * f2.denom - f2.num * denom;
    f.denom = denom * f2.denom;

    f.reduce();

    return f;
}

Fraction Fraction::mulFrac(Fraction f2) {
    Fraction f;
    f.num = num*f2.num;
    f.denom = denom*f2.denom;

    f.reduce();

    return f;
}

Fraction Fraction::divFrac(Fraction f2) {
    Fraction f;
    if (denom == 0) return f;
    f.num = num*f2.denom;
    f.denom = denom*f2.num;

    f.reduce();

    return f;
}