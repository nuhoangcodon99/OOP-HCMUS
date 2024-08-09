#include "Fraction.h"

void Fraction::input() {
    cout << "\nInput fraction: ";
    cin >> num >> den;

    if (den == 0) {
        cout << "Math error";
        input();
    }
}

void Fraction::output() {
    cout << num <<"/" << den;
}

void Fraction::add(Fraction a) {
    Fraction c;
    c.num=num*a.den+a.num*den;
    c.den=den*a.den;
    c.output();
}

void Fraction::sub(Fraction a) {
    Fraction c;
    c.num=num*a.den-a.num*den;
    c.den=den*a.den;
    c.output();
}

void Fraction::mul(Fraction a) {
    Fraction c;
    c.num=num*a.num;
    c.den=den*a.den;
    c.output();
}

void Fraction::div(Fraction a) {
    Fraction c;
    c.num=num*a.den;
    c.den=den*a.num;

    if (c.den==0) {
        cout << "Math error";
    }
    c.output();
}

int Fraction::gcd(int a, int b) {
    if (a==b) return a;
    if (a>b) return gcd(a-b, b);
    return gcd(b, b-a);
}

void Fraction::reduce(){
    int c=gcd(num, den);
    num=num/c;
    den=den/c;
    output();
}

void Fraction::compare(Fraction a) {
    int t1, t2;
    t1=num*a.den;
    t1=a.num*den;

    if (t1>t2) {
        cout << "Fraction a > fraction b";
    } else if (t1<t2) {
        cout << "Fraction a < fraction b";
    } else {
        cout << "Fraction a = fraction b";
    }
}

bool Fraction::IsPositive() {
    float t;
    t=num*den;

    if (t<0) return false;
    return true;
}

bool Fraction::IsNegative() {
    float t;
    t=num*den;

    if (t>0) return false;
    return true;
}

bool Fraction::IsZero() {
    if (num==0) return true;
    return false;
}



