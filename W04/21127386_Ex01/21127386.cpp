#include "FractionArray.h"

int main() {
    Fraction f1;
    f1.input();
    f1.output();

    Fraction f2(3);
    Fraction f3(3, 4);
    Fraction f4("4/3");
    Fraction f5;

    f5.readFromFile("input.txt");
    f5.saveToText("output.txt");

    f2.output();
    f3.output();
    f4.output();
    //------------------test1-------------------
    FractionArray arr;
    arr.readFileArr("inputArr.txt");
    cout << endl;
    arr.maxFraction().output();
    cout << endl << arr.countPos();
    cout << endl << arr.countNeg();
    cout << endl << arr.countZero();
    arr.saveFileArr("outputArr.txt");


    return 0;
}