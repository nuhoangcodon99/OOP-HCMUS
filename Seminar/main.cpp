#include <vector>
#include <conio.h>
#include "Shape.h"
#include "Color.h"
#include "Red.h"
#include "Blue.h"
#include "Yellow.h"
#include "Square.h"
#include "Circle.h"

int main() {
    srand(3);

    vector<Shape*> listShape;
    for(int i=0; i<10; i++) {
        int a = rand()%2;
        int b = rand()%3;

        Color* tempColor;
        switch (b)
        {
        case 0:
            tempColor = new Red();
            break;
        case 1:
            tempColor = new Blue();
            break;
        default:
            tempColor = new Yellow();
            break;
        }

        Shape* temp;
        switch (a)
        {
        case 0:
            temp = new Square(tempColor);
            break;
        default:
            temp = new Circle(tempColor);
            break;
        }
        listShape.push_back(temp);
    }
    for(int i=0; i<listShape.size(); i++) {
        cout << listShape[i]->getColor() << endl;
    }

    return 0;
}