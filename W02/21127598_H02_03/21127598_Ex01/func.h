#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Fraction{
    int num;
    int denom;
public:
    void input();
    void output();

    Fraction();
    
    int GCD(int, int);
    Fraction addFrac(Fraction);
    Fraction subFrac(Fraction);
    Fraction mulFrac(Fraction);
    Fraction divFrac(Fraction); 

    void reduce();
    int compare(Fraction, Fraction);

    bool isPos();
    bool isNeg();
    bool isZero();
};