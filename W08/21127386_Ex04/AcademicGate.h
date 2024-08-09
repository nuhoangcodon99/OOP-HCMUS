#pragma once
#include "Gate.h"

class AcademicGate:public Gate {
private:
    int intellect;
public:
    void setGate();
    bool passedGate(Prince&);
};