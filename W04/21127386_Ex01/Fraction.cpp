#include "Fraction.h"

Fraction::Fraction() {
    num=0;
    den=1;
}

Fraction::Fraction(int x) {
    num=x;
    den=1;
}

Fraction::Fraction(int x, int y) {
    num=x;
    den=y;
}

Fraction::Fraction(const string s) {
    stringstream ss(s);
    string temp;
    getline(ss, temp, '/');
    num=stoi(temp);
    getline(ss, temp, '\n');
    den=stoi(temp);
}

Fraction::~Fraction() {

}

void Fraction::input() {
    cout <<"\nInput fraction: ";
    cin >> num >> den;
}

void Fraction::output() {
    cout << endl;
    cout << num << "/" << den;
}

void Fraction::readFromFile(string fileName) {
    ifstream fin;
    fin.open(fileName);
    string temp;
    fin >> temp;

    Fraction f(temp);

    *this=f;
    fin.close();
}

void Fraction::saveToText(string fileName) {
    ofstream fout;
    fout.open(fileName,ios::app);

    fout << num << "/" << den;
    fout << "\n";
    fout.close();
}

Fraction Fraction::add(Fraction f) {
    Fraction temp;
    temp.num=num*f.den+f.num*den;
    temp.den=den*f.den;

    return temp;
}

int Fraction::compare(Fraction f) {
    int a=num*f.den;
    int b=f.num*den;

    if(a>b) return 1;
    else if(a<b) return -1;
    else return 0;
}

bool Fraction::isPositive() {
    if (num*den>0) return true;
    return false; 
}

bool Fraction::isNegative() {
    if(num*den<0) return true;
    return false;
}

bool Fraction::isZero() {
    if(num==0) return true;
    return false;
}