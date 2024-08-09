#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    int x;
    int y;

    void Input();
    void Output();
    float distanceTwoPoint(Point);
    int distanceToOx();
    int distanceToOy();
};

class Triangle{
public:
    Point a;
    Point b;
    Point c;

    void Input();
    void Output();
    bool IsValidTriangle();
    void TypeOfATriangle();
    float Perimeter();
    float Area();
    Point CenterG();
};