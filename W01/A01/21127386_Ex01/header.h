#include <iostream>
using namespace std;

struct Fraction {
    int num;
    int den;
};

void input(Fraction &a);

void output(Fraction a);

void add(Fraction a, Fraction b);

void sub(Fraction a, Fraction b);

void mul(Fraction a, Fraction b);

void div(Fraction a, Fraction b);

int gcd(int a, int b);

void reduce(Fraction a);

void compare(Fraction a, Fraction b);

bool IsPositive(Fraction a);

bool IsNegative(Fraction a);

bool IsZero(Fraction a);

