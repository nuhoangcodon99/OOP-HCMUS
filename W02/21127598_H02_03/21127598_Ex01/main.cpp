#include <iostream>
#include "func.h"

using namespace std;

int main() {
    Fraction f1;
    f1.input();
    f1.output();

    Fraction f2;
    f2.input();
    f2.output();

    Fraction f;
    f = f1.addFrac(f2);
    f.output();
    return 0;
}