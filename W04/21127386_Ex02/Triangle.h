#include "Point.h"

class Triangle {
private:
    Point a;
    Point b;
    Point c;
public:
    Triangle();
    Triangle(int, int, int, int, int, int);
    Triangle(string);

    void input();
    void output();
    void readFromFile(string);
    void saveToFile(string);
    bool isValidTriangle();
    int typeOfTriangle();
    float perimeter();
    float area();
};