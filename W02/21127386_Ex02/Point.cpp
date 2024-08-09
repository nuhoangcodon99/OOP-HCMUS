#include "Point.h"

void Point::Input() {
    cout <<"\nInput x, y: ";
    cin >> x >> y;
}

void Point::Output() {
    cout << "(" << x << " " << y << ")";
}

float Point::distanceTwoPoint(Point a) {
    float d=(a.x - x)*(a.x - x) + (a.y - y)*(a.y - y);
    return sqrt(d);
}

int Point::distanceToOx() {
    return y;
}

int Point::distanceToOy() {
    return x;
}

void Point::setX(int a) {
    x=a;
}

void Point::setY(int a) {
    y=a;
}


void Triangle::Input() {
    cout <<"\nInput A: ";
    a.Input();
    cout <<"\nInput B: ";
    b.Input();
    cout <<"\nInput C: ";
    c.Input();
}

void Triangle::Output() {
    a.Output();
    b.Output();
    c.Output();
}

bool Triangle::IsValidTriangle() {
    if (a.distanceTwoPoint(b)+a.distanceTwoPoint(c)>b.distanceTwoPoint(c) &&
        b.distanceTwoPoint(c)+b.distanceTwoPoint(a)>a.distanceTwoPoint(c) &&
        c.distanceTwoPoint(a)+c.distanceTwoPoint(b)>a.distanceTwoPoint(b) &&
        a.distanceTwoPoint(b)>0 && b.distanceTwoPoint(c)>0 && a.distanceTwoPoint(c)>0) {
        return true;
    }
    return false;
}

void Triangle::TypeOfATriangle() {
    if(!IsValidTriangle()) return;
    if (a.distanceTwoPoint(b)==a.distanceTwoPoint(c) || b.distanceTwoPoint(a)==b.distanceTwoPoint(c)
     || c.distanceTwoPoint(a)==c.distanceTwoPoint(b)) {
        if (a.distanceTwoPoint(b)==a.distanceTwoPoint(c)==b.distanceTwoPoint(c)) {
            cout << "\nEquilateral triangle";
        }
        else {
            cout << "\nIsoseles triangle";
        }
    }
    if (a.distanceTwoPoint(b)*a.distanceTwoPoint(b)+a.distanceTwoPoint(c)*a.distanceTwoPoint(c)==b.distanceTwoPoint(c)*b.distanceTwoPoint(c) ||
        b.distanceTwoPoint(a)*b.distanceTwoPoint(a)+b.distanceTwoPoint(c)*b.distanceTwoPoint(c)==a.distanceTwoPoint(c)*a.distanceTwoPoint(c) ||
        c.distanceTwoPoint(a)*c.distanceTwoPoint(a)+c.distanceTwoPoint(b)*c.distanceTwoPoint(b)==a.distanceTwoPoint(b)*a.distanceTwoPoint(b)) {
            cout << "\nRight-angled triangle";
    }
    else {
        cout << "\nNormal triangle";
    }
}

float Triangle::Perimeter() {
    float per=a.distanceTwoPoint(b)+b.distanceTwoPoint(c)+c.distanceTwoPoint(a);
    return per;
}

float Triangle::Area() {
    float p = Perimeter()/2;
    float area=abs(p*(p-a.distanceTwoPoint(b))*(p-a.distanceTwoPoint(c))*(p-b.distanceTwoPoint(c)));
    return area;
}

Point Triangle::CenterG () {
    Point g;
    g.setX((a.distanceToOy()+b.distanceToOy()+c.distanceToOy())/3);
    g.setY((a.distanceToOx()+b.distanceToOx()+c.distanceToOx())/3);
    return g;
}






