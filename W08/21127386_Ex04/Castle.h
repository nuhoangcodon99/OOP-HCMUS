#pragma once
#include "Gate.h"
#include "BusinessGate.h"
#include "AcademicGate.h"
#include "PowerGate.h"
#include "Prince.h"
#include "vector"

class Castle {
private:
    vector<Gate*> listGate;
public:
    ~Castle();
    
    void input();
    bool checkGame(Prince&);
};