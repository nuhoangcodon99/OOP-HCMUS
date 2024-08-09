#include "TriangleArray.h"

int main() {
    string s="[(1,0) (2,3) (1,4)];[(1,1) (1,3) (1,4)]";
    string s1="(1,0) (2,3) (1,4)";
    TriangleArray a;
    Triangle b(s1);

    a.TriangleArray::readFromFile("inputPoint.txt");
    a.TriangleArray::output();
    cout << endl;
    b.Triangle::output();
    a.countTypes();

    return 0;
}