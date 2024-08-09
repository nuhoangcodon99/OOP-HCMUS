#pragma once
#include "Gate.h"

class BusinessGate:public Gate {
private:
    int price;
    int numberOfProducts;
public:
    void setGate();
    bool passedGate(Prince&);
};