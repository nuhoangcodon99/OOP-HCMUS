#include "Circle.h"

Circle::Circle(Color* color): Shape(color) {

}

string Circle::getColor() {
    return Shape::getColor() + " circle";
}