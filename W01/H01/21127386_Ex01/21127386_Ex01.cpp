#include "header.h"

int main() {
    Fraction a, b;
    input(a);
    input(b);
    output(a);
    cout << endl;
    output(b);
    
    cout << "\nAdd a, b: ";
    add(a, b);

    cout << "\nSub a, b: ";
    sub(a, b);

    cout << "\nMul a, b: ";
    mul(a, b);

    cout << "\nDiv a, b: ";
    div(a, b);

    cout << "\nReduce a: ";
    reduce(a);

    cout << "\nCompare a, b: ";
    compare(a, b);

    if (IsPositive(a)) cout << "\nFraction a is positive";
    if (IsNegative(b)) cout << "\nFraction b is negative";

    return 0;
}