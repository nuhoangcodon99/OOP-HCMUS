#include "Square.h"

Square::Square(Color* color): Shape(color) {

}

string Square::getColor() {
    return Shape::getColor() + " square";
}