#include "Shape.h"

Shape::Shape(Color* color) {
    colorOfShape = color;
}

string Shape::getColor() {
    return colorOfShape->getColor();
}