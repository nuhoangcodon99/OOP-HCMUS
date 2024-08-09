#include "Point.h"


class Triangle {
private:
    Point _A, _B, _C;
public:
    void input();
    void output();

    bool isValidTriangle();
    void triangleType();
    float perimeter();
    float area();
    Point center();
};