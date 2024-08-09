#pragma once
#include <iostream>
using namespace std;

class Prince {
private:
    int money;
    int intellect;
    int power;
public:
    void input();
    int getPrinceMoney();
    int getPrinceIntellect();
    int getPrincePower();
    void setPrinceMoney(int);
    void setPrinceIntellect(int);
    void setPrincePower(int);

    void output();
};