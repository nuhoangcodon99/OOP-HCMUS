#pragma once
#include "Prince.h"

class Gate {
public:
    virtual void setGate();
    virtual bool passedGate(Prince&);
};