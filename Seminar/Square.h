#pragma once
#include "Shape.h"

class Square: public Shape {
public:
    Square(Color*);
    string getColor();
};