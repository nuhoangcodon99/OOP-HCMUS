#include "FractionArray.h"

FractionArray::FractionArray() {
    size=0;
    fArr=NULL;
}

FractionArray::FractionArray(int n) {
    size=n;
    fArr=new Fraction[size];
}

FractionArray::FractionArray(Fraction* f, int n) {
    size=n;
    fArr=new Fraction[size];
    for (int i=0; i<size; i++) {
        fArr[i]=f[i];
    }
}

FractionArray::FractionArray(vector<Fraction> f) {
    size=f.size();
    fArr=new Fraction[size];

    for (int i=0; i<size; i++) {
        fArr[i]=f[i];
    }
}

FractionArray::FractionArray(string s) {
    stringstream ss(s);
    string temp;
    vector<Fraction> vTemp;
    while(getline(ss, temp, ' ')) {
        Fraction fTemp(temp);
        vTemp.push_back(fTemp);
    }
    FractionArray f(vTemp);
    *this=f;
}

void FractionArray::input() {
    cout <<"\nInput number of fractions: ";
    cin>> size;

    fArr=new Fraction[size];
    for(int i=0; i<size; i++) {
        fArr[i].Fraction::input();
    }
}

void FractionArray::output() {
    for(int i=0; i<size; i++) {
        fArr[i].Fraction::output();
    }
}

void FractionArray::readFileArr(string fileName) {
    ifstream fin;
    fin.open(fileName);
    string temp;
    vector<Fraction> vTemp;

    while(!fin.eof()) {
        fin >> temp;
        Fraction fTemp(temp);
        vTemp.push_back(fTemp);
    }
    FractionArray f(vTemp);
    *this=f;
    fin.close();
}

void FractionArray::saveFileArr(string fileName) {
    ofstream fout;
    fout.open(fileName);
    for (int i=0; i<size; i++) {
        fArr[i].saveToText(fileName);
    }
    fout.close();
}

Fraction FractionArray::sumAllArr() {
    Fraction temp;
    for (int i=0; i<size; i++) {
        temp=temp.add(fArr[i]);
    }
    return temp;
}

Fraction FractionArray::maxFraction() {
    Fraction temp;
    for (int i=0; i<size; i++) {
        if(temp.compare(fArr[i])==-1) {
            temp=fArr[i];
        }
    }
    return temp;
}

int FractionArray::countNeg() {
    int count=0;
    for (int i=0; i<size; i++) {
        if(fArr[i].isNegative()==true) {
            count++;
        }
    }
    return count;
}

int FractionArray::countPos() {
    int count=0;
    for (int i=0; i<size; i++) {
        if(fArr[i].isPositive()==true) {
            count++;
        }
    }
    return count; 
}

int FractionArray::countZero() {
    int count=0;
    for (int i=0; i<size; i++) {
        if(fArr[i].isZero()==true) {
            count++;
        }
    }
    return count; 
}