#include "CFile.h"

CFile::CFile(const string& nameOfFile, int sizeOfFile):CItem(nameOfFile, sizeOfFile) {

}

int CFile::sizeOfItem() {
    return size;
}

void CFile::print(bool isHidden) {
    if (isHidden==true) {
        cout << "\nFile name: " << name;
        cout << "\nFile size: " << size;
    } else {
        if(hidden!=true) {
            cout << "\nFile name: " << name;
            cout << "\nFile size: " << size;
        }
    }
}

CItem* CFile::removeByName(const string& nameOfFile) {
    return this;
}

CItem* CFile::findByName(const string& nameOfFile) {
    CItem* temp = NULL;
    if (name == nameOfFile) temp = this;
    return temp;
}

void CFile::setHidden(bool setSuper, bool setSub) {
    if (setSub == true) hidden = true;
}
