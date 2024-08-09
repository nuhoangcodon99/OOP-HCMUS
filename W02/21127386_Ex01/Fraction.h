#include <iostream>
using namespace std;

class Fraction {
    int num;
    int den;
public:
    void input();

    void output();

    void add(Fraction);

    void sub(Fraction);

    void mul(Fraction);

    void div(Fraction);

    int gcd(int, int);

    void reduce();

    void compare(Fraction);

    bool IsPositive();

    bool IsNegative();

    bool IsZero();

};

