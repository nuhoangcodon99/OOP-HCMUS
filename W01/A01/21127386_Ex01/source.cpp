#include "header.h"

void input(Fraction &a) {
    cout << "\nInput fraction: ";
    cin >> a.num >> a.den;

    if (a.den == 0) {
        cout << "Math error";
        input(a);
    }
}

void output(Fraction a) {
    cout << a.num <<"/" << a.den;
}

void add(Fraction a, Fraction b) {
    Fraction c;
    c.num=a.num*b.den+b.num*a.den;
    c.den=a.den*b.den;
    output(c);
}

void sub(Fraction a, Fraction b) {
    Fraction c;
    c.num=a.num*b.den-b.num*a.den;
    c.den=a.den*b.den;
    output(c);
}

void mul(Fraction a, Fraction b) {
    Fraction c;
    c.num=a.num*b.num;
    c.den=a.den*b.den;
    output(c);
}

void div(Fraction a, Fraction b) {
    Fraction c;
    c.num=a.num*b.den;
    c.den=a.den*b.num;

    if (c.den==0) {
        cout << "Math error";
    }
    output(c);
}

int gcd(int a, int b) {
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

void reduce(Fraction a){
    int c;
    c=gcd(a.num, a.den);
    a.num=a.num/c;
    a.den=a.den/c;
    output(a);
}

void compare(Fraction a, Fraction b) {
    int t1, t2;
    t1=a.num*b.den;
    t1=b.num*a.den;

    if (t1>t2) {
        cout << "Fraction a > fraction b";
    } else if (t1<t2) {
        cout << "Fraction a < fraction b";
    } else {
        cout << "Fraction a = fraction b";
    }
}

bool IsPositive(Fraction a) {
    float t;
    t=a.num/a.den;

    if (t<0) return false;
    return true;
}

bool IsNegative(Fraction a) {
    float t;
    t=a.num/a.den;

    if (t>0) return false;
    return true;
}

bool IsZero(Fraction a) {
    if (a.num==0) return true;
    return false;
}



