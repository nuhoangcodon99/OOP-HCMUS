#include "Point.h"

Point::Point() {
    x=0;
    y=0;
}

Point::Point(int a) {
    x=a;
    y=a;
}

Point::Point(int a, int b) {
    x=a;
    y=b;
}

Point::Point(string s) {
    stringstream ss(s);
    string temp;
    ss.get();
    getline(ss, temp, ',');
    x=stoi(temp);
    getline(ss, temp, ')');
    y=stoi(temp);
}

void Point::input() {
    cout <<"\nInput point: ";
    cin >> x >> y;
}

void Point::output() {
    cout << "(" << x << "," << y << ")";
}

void Point::readFromFile(string fileName) {
    ifstream fin;
    fin.open(fileName);

    string temp;
    fin >> temp;
    Point pTemp(temp);
    *this=pTemp;

    fin.close();
}

void Point::saveToFile(string fileName) {
    ofstream fout;
    fout.open(fileName, ios::app);
    fout << "(" << x << "," << y <<")";

    fout.close();
}

float Point::distance(Point a) {
    float temp;
    temp=(x-a.x)*(x-a.x) + (y-a.y)*(y-a.y);
    return sqrt(temp);
}