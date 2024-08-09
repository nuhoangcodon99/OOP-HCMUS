#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class Fraction {
private:
    int num;
    int den;
public:
    Fraction();
    Fraction(int);
    Fraction(int, int);
    Fraction(const string);
    ~Fraction();

    void input();
    void output();
    void readFromFile(string);
    void saveToText(string);

    Fraction add(Fraction);
    int compare(Fraction);

    bool isPositive();
    bool isNegative();
    bool isZero();
};