#pragma once
#include "CItem.h"

class CFolder:public CItem {
private:
    vector<CItem*> listOfItem;
public:
    CFolder(const string&);
    ~CFolder();

    int sizeOfItem();
    void add(CItem*);
    void print(bool);
    CItem* removeByName(const string&);
    CItem* findByName(const string&);
    void setHidden(bool, bool);
};