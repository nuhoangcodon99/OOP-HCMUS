#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CItem {
protected:
    string name;
    int size;
    bool readOnly;
    bool hidden;
public:
    CItem(const string&);
    CItem(const string&, int);

    virtual int sizeOfItem();
    virtual void print(bool);
    virtual string getName();
    virtual CItem* removeByName(const string&);
    virtual CItem* findByName(const string&);
    virtual void setHidden(bool, bool);
};

