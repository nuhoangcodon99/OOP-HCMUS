#pragma once
#include "Color.h"

class Shape {
protected:
    Color* colorOfShape;
public:
    Shape(Color*);
    virtual string getColor();
};