#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x;
    int y;

public:
    void Input();
    void Output();
    float distanceTwoPoint(Point);
    int distanceToOx();
    int distanceToOy();
    void setX(int);
    void setY(int);
};

class Triangle{
    Point a;
    Point b;
    Point c;

public:
    void Input();
    void Output();
    bool IsValidTriangle();
    void TypeOfATriangle();
    float Perimeter();
    float Area();
    Point CenterG();
};