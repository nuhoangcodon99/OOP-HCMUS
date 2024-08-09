#include "TriangleArray.h"

TriangleArray::TriangleArray() {
    size=0;
    tArr=NULL;
}

TriangleArray::TriangleArray(int n) {
    size=n;
    tArr=new Triangle[size];
}

TriangleArray::TriangleArray(Triangle a[], int n) {
    size=n;
    tArr=new Triangle[size];
    for (int i=0; i<size; i++) {
        tArr[i]=a[i];
    }
}

TriangleArray::TriangleArray(vector<Triangle> v) {
    size=v.size();
    tArr=new Triangle[size];
    for (int i=0; i<size; i++) {
        tArr[i]=v[i];
    }
}

TriangleArray::TriangleArray(string s) {
    stringstream ss(s);
    string temp;
    vector<Triangle> vTemp;

    while(ss.get() && getline(ss, temp, ']')) { //[(..) (..) (..)];
        Triangle tTemp(temp);
        vTemp.push_back(tTemp);
        ss.get();
    }
    TriangleArray vArr(vTemp);
    *this=vArr;
}

void TriangleArray::input() {
    cout << "\nInput number of triangle: ";
    cin >> size;

    tArr = new Triangle[size];
    for (int i=0; i<size; i++) {
        Triangle temp;
        temp.Triangle::input();
        tArr[i]=temp;
    }
}

void TriangleArray::output() {
    for(int i=0; i<size; i++) {
        cout <<"\n[";
        tArr[i].Triangle::output();
        cout << "]";
        if(i!=size-1) {
            cout << ";";
        }
    }
}

void TriangleArray::readFromFile(string fileName) {
    ifstream fin;
    fin.open(fileName);
    string temp;
    vector<Triangle> vTemp;
    while(!fin.eof()) {
        getline(fin, temp, '\n');
        Triangle tTemp(temp);
        vTemp.push_back(tTemp);
    }
    TriangleArray aTemp(vTemp);
    *this=aTemp;

    fin.close();
}

void TriangleArray::saveToFile(string fileName) {
    ofstream fout;
    fout.open(fileName, ios::app);
    for(int i=0; i<size; i++) {
        fout <<"\n[";
        tArr[i].Triangle::saveToFile(fileName);
        fout << "]";
        if(i!=size-1) {
            fout << ";";
        }
    }
    fout.close();
}

void TriangleArray::listInvalid() {
    vector<Triangle> invalid;
    for(int i=0; i<size; i++) {
        if(tArr[i].isValidTriangle()==false) {
            invalid.push_back(tArr[i]);
        }
    }
    for(int i=0; i<invalid.size(); i++) {
        invalid[i].output();
        cout << endl;
    }
}

Triangle TriangleArray::maxArea() {
    Triangle max;
    for(int i=0; i<size; i++) {
        if(max.area()<tArr[i].area()) {
            max=tArr[i];
        }
    }
    return max;
}

void TriangleArray::countTypes() {
    int equilateral=0;
    int isoseles=0;
    int right=0;
    int normal=0;

    for(int i=0; i<size; i++) {
        if(tArr[i].typeOfTriangle()==1) {
            equilateral++;
        } else if (tArr[i].typeOfTriangle()==2) {
            isoseles++;
        } else if (tArr[i].typeOfTriangle()==3) {
            right++;
        }
        else {
            normal++;
        }
    }
    cout << "\nNumber of equilateral triangle: " << equilateral;
    cout << "\nNumber of isoseles triangle: " << isoseles;
    cout << "\nNumber of right-angled triangle: " << right;
    cout << "\nNumber of normal triangle: " << normal;
}