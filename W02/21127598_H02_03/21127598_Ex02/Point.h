#include <iostream>
#include <cmath>

using namespace std;


class Point {
private:
    int _x = 0, _y = 0;
public:
    Point();

    void input();
    void input(int, int);
    void output();

    float distAtoB(Point);
    int distToX() {return _y;};
    int distToY() {return _x;};
};