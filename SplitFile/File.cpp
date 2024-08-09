#include "File.h"

void File::input() {
    char temp[1];
    cout << "\nInput file name: ";
    cin >> fileName;
    int count=0;
    ifstream fin;
    fin.open(fileName, ios::binary);
    while(fin.read(temp, sizeof(temp)))
    {
        count++;
    }
    size = count;
    fin.close();
}

void File::split() {
    int sizeOfPath;
    cout << "\nEnter byte each path: ";
    cin >> sizeOfPath;

    int loop;
    int modByte;

    loop = size/sizeOfPath;
    modByte = size%sizeOfPath;
    
    if(modByte!=0) {
        loop = loop+1;
    }

    char *a;
    a=new char[sizeOfPath];

    ifstream fin;
    fin.open(fileName, ios::binary);
    int index=1;
    ofstream fout;

    for (int i=0; i<loop-1; i++) {
        stringstream ss;
        ss << index;
        string pathNum = ss.str();
        fout.open(fileName +"."+pathNum, ios::app|ios::binary);

        fin.read(a, sizeOfPath);
        fout.write(a, sizeOfPath);

        fout.close();
        index++;
    }

    for (int i=loop-1; i<loop; i++) {
        stringstream ss;
        ss << index;
        string pathNum = ss.str();
        fout.open(fileName +"."+pathNum, ios::app|ios::binary);

        fin.read(a, modByte);
        fout.write(a, modByte);

        fout.close();
        index++;
    }
    
    delete []a;
    fin.close();
}

void File::join() {
    ifstream fin;
    ofstream fout;

    int index=1;
    char a[1];

    string firstPieceName;
    cout << "\nEnter the first piece name: ";
    cin >> firstPieceName;
    string fileIn;
    string pathNum;

    int count=0;
    fileIn = firstPieceName.substr(0, firstPieceName.length()-2);
    pathNum = firstPieceName.substr(firstPieceName.length()-1, 1);

    do {
        count++;
        fin.open(fileIn+"."+pathNum, ios::binary);
        stringstream ss;
        ss << index;
        string pathNum = ss.str();
        index++;
        fin.close();
        fin.open(fileIn+"."+pathNum, ios::binary);
    } while(!fin.fail());

    fin.close();
    count=count-1;

    fout.open("join_"+fileIn, ios::app|ios::binary);
    for(int i=1; i<=count; i++) {
        stringstream ss;
        ss << i;
        string pathNum = ss.str();
        fin.open(fileIn+"."+pathNum, ios::binary);
        while(fin.read(a, sizeof(a))) {
            fout.write(a, sizeof(a));
        }
        fin.close();
    }
    fout.close();
}