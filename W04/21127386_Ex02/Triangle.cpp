#include "Triangle.h"

Triangle::Triangle() {
    Point aTemp;
    Point bTemp(0, 1);
    Point cTemp(1, 0);

    a=aTemp;
    b=bTemp;
    c=cTemp;
}

Triangle::Triangle(int xA, int yA, int xB, int yB, int xC, int yC) {
    Point aTemp(xA, yA);
    Point bTemp(xB, yB);
    Point cTemp(xC, yC);

    a=aTemp;
    b=bTemp;
    c=cTemp;
}

Triangle::Triangle(string s) {
    stringstream ss(s);
    string temp;
    getline(ss, temp, ' ');
    Point aTemp(temp);
    getline(ss, temp, ' ');
    Point bTemp(temp);
    getline(ss, temp, '\n');
    Point cTemp(temp);

    a=aTemp;
    b=bTemp;
    c=cTemp;
}

void Triangle::input() {
    cout << "\nInput a triangle: ";
    a.Point::input();
    b.Point::input();
    c.Point::input();
}

void Triangle::output() {
    a.Point::output();
    cout << " ";
    b.Point::output();
    cout << " ";
    c.Point::output();
}

void Triangle::readFromFile(string fileName) {
    ifstream fin;
    fin.open(fileName);
    string temp;

    //while(!fin.eof()) {
        getline(fin, temp, '\n');
    //}
    
    Triangle tTemp(temp);
    *this=tTemp;
    fin.close();
}

void Triangle::saveToFile(string fileName) {
    ofstream fout;
    fout.open(fileName, ios::app);
    a.Point::saveToFile(fileName);
    cout << " ";
    b.Point::saveToFile(fileName);
    cout << " ";
    c.Point::saveToFile(fileName);

    fout.close();
}

bool Triangle::isValidTriangle() {
    if (a.distance(b)+a.distance(c)>b.distance(c) &&
        b.distance(c)+b.distance(a)>a.distance(c) &&
        c.distance(a)+c.distance(b)>a.distance(b) &&
        a.distance(b)>0 && b.distance(c)>0 && a.distance(c)>0) {
        return true;
    }
    return false;
}

int Triangle::typeOfTriangle() {
    if(!isValidTriangle()) return 0;
    if (a.distance(b)==a.distance(c) || b.distance(a)==b.distance(c)
     || c.distance(a)==c.distance(b)) {
        if (a.distance(b)==a.distance(c)==b.distance(c)) {
            cout << "\nEquilateral triangle";
            return 1;
        }
        else {
            cout << "\nIsoseles triangle";
            return 2;
        }
    }
    if (a.distance(b)*a.distance(b)+a.distance(c)*a.distance(c)==b.distance(c)*b.distance(c) ||
        b.distance(a)*b.distance(a)+b.distance(c)*b.distance(c)==a.distance(c)*a.distance(c) ||
        c.distance(a)*c.distance(a)+c.distance(b)*c.distance(b)==a.distance(b)*a.distance(b)) {
            cout << "\nRight-angled triangle";
            return 3;
    }
    else {
        cout << "\nNormal triangle";
        return 4;
    }
}

float Triangle::perimeter() {
    float per=a.distance(b)+b.distance(c)+c.distance(a);
    return per;
}

float Triangle::area() {
    float p = perimeter()/2;
    float area=abs(p*(p-a.distance(b))*(p-a.distance(c))*(p-b.distance(c)));
    return area;
}