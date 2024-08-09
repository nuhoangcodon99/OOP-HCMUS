#include "Triangle.h"

void Triangle::input() {
    cout << "Input point A " << endl;
    _A.input();
    cout << "Input point B " << endl;
    _B.input();
    cout << "Input point C " << endl;
    _C.input();
}

void Triangle::output() {
    cout << "Point A: ";
    _A.output();
    cout << "Point B: ";
    _B.output();
    cout << "Point C: ";
    _C.output();
}

bool Triangle::isValidTriangle() {
    return (_A.distAtoB(_B) + _A.distAtoB(_C) > _B.distAtoB(_C) ||
            _A.distAtoB(_C) + _B.distAtoB(_C) > _A.distAtoB(_B) ||
            _B.distAtoB(_C) + _A.distAtoB(_B) > _A.distAtoB(_C)) 
            ? true:false;
}

void Triangle::triangleType() {
    if(!isValidTriangle()) {
        cout << "Not a valid triangle" << endl;
        return;
    }
    if (_A.distAtoB(_B) == _A.distAtoB(_C) ||
        _A.distAtoB(_C) == _B.distAtoB(_C) ||
        _B.distAtoB(_C) == _A.distAtoB(_B))
        if (_A.distAtoB(_B) == _A.distAtoB(_C) && _A.distAtoB(_C) == _B.distAtoB(_C))
            cout << "Equilateral triangle" << endl;
        else
            cout << "Isosceles triangle" << endl;
    
    if (pow(_A.distAtoB(_C), 2) == pow(_A.distAtoB(_B), 2) + pow(_B.distAtoB(_C), 2) ||
        pow(_B.distAtoB(_C), 2) == pow(_A.distAtoB(_B), 2) + pow(_A.distAtoB(_C), 2) ||
        pow(_A.distAtoB(_B), 2) == pow(_A.distAtoB(_C), 2) + pow(_B.distAtoB(_C), 2))
        cout << "Right-angled triangle";
    else
        cout << "Normal triangle";
}

float Triangle::perimeter() {
    return _A.distAtoB(_B) + _A.distAtoB(_C) + _B.distAtoB(_C);
}

float Triangle::area() {
    float p = perimeter()*0.5;
    return sqrt(p*(p - _A.distAtoB(_B)*(p - _A.distAtoB(_C)*(p - _B.distAtoB(_C)))));
}

Point Triangle::center() {
    Point G;
    int x = (_A.distToY() + _B.distToY() + _C.distToY()) / 3;
    int y = (_A.distToX() + _B.distToX() + _C.distToX()) / 3;
    G.input(x, y);
    return G;
}