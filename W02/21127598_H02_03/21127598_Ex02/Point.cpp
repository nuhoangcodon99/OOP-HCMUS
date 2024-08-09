#include "Point.h"

Point::Point() {

}

void Point::input() {
    int x, y;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    
    _x = x;
    _y = y;
}

void Point::input(int x, int y) {
    _x = x;
    _y = y;
}

void Point::output() {
    cout << "(" << _x << ", " << _y << ")" << endl;
}

float Point::distAtoB(Point b) {
    return sqrt(pow(_x - b._x, 2) + pow(_y - b._y, 2));
}