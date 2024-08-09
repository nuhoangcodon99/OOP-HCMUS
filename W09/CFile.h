#pragma once
#include "CItem.h"

class CFile: public CItem {
public:
    CFile(const string&, int);
    int sizeOfItem();

    void print(bool);
    CItem* removeByName(const string&);
    CItem* findByName(const string&);
    void setHidden(bool, bool);
};