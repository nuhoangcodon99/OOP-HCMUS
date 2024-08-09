#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include<cmath>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point();
    Point(int);
    Point(int, int);
    Point(string);

    void input();
    void output();
    void readFromFile(string);
    void saveToFile(string);
    float distance(Point);
};