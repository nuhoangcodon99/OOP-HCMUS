#pragma once
#include "Gate.h"

class PowerGate:public Gate {
private:
    int power;
public:
    void setGate();
    bool passedGate(Prince&);
};