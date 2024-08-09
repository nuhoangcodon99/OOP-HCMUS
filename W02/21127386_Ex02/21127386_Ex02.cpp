#include "Point.h"

int main() {
    Triangle tri;
    tri.Input();
    
    tri.TypeOfATriangle();

    if (tri.IsValidTriangle()) cout << "\nThis triangle is valid";

    cout << "\nPerimeter: ";
    cout << tri.Perimeter() << endl;

    cout << "\nArea: ";
    cout << tri.Area() << endl;

    cout << "\nCenter: ";
    tri.CenterG().Output();

    return 0;
}