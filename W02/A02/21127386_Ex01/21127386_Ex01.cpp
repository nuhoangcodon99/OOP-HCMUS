#include "Fraction.h"

int main() {
    Fraction a, b;
    a.input();
    b.input();
    a.output();
    cout << endl;
    b.output();
    
    cout << "\nAdd a, b: ";
    a.add(b);

    cout << "\nSub a, b: ";
    a.sub(b);

    cout << "\nMul a, b: ";
    a.mul(b);

    cout << "\nDiv a, b: ";
    a.div(b);

    cout << "\nReduce a: ";
    a.reduce();

    cout << "\nCompare a, b: ";
    a.compare(b);

    if (a.IsPositive()) cout << "\nFraction a is positive";
    if (b.IsNegative()) cout << "\nFraction b is negative";

    return 0;
}