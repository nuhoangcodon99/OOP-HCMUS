#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {
    // Point A, B, C;
    // cout << "Input point A " << endl;
    // A.input();
    // cout << "Input point B " << endl;
    // B.input();
    // cout << "Input point C " << endl;
    // C.input();

    // cout << "Distance A to B: " << A.distAtoB(C) << endl;

    Triangle ABC;
    ABC.input();
    ABC.output();

    cout << "Perimeter: " << ABC.perimeter() << endl;
    cout << "Area: " << ABC.area() << endl;
    cout << "Triangle type: "; ABC.triangleType();
    cout << "\n";
    cout << "Center: "; 

    Point G = ABC.center();
    G.output();

    return 0;
}