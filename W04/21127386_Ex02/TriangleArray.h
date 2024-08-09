#include "Triangle.h"
#include <vector>

class TriangleArray {
private:
    Triangle *tArr;
    int size;
public:
    TriangleArray();
    TriangleArray(int);
    TriangleArray(Triangle*, int);
    TriangleArray(vector<Triangle>);
    TriangleArray(string);

    void input();
    void output();
    void readFromFile(string);
    void saveToFile(string);
    void listInvalid();
    Triangle maxArea();
    void countTypes();
};