#include "Fraction.h"
#include <vector>

class FractionArray {
private:
    Fraction* fArr;
    int size;
public:
    FractionArray();
    FractionArray(int);
    FractionArray(Fraction*, int);
    FractionArray(vector<Fraction>);
    FractionArray(string);

    void input();
    void output();

    void readFileArr(string);
    void saveFileArr(string);
    Fraction sumAllArr();
    Fraction maxFraction();
    int countNeg();
    int countPos();
    int countZero();


};