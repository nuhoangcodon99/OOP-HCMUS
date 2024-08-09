#include "CFolder.h"

CFolder::CFolder(const string& nameOfFolder): CItem(nameOfFolder) {

}

CFolder::~CFolder() {
    listOfItem.clear();
}

int CFolder::sizeOfItem() {
    return size;
}

void CFolder::add(CItem* inItem) {
    listOfItem.push_back(inItem);
    size = size + inItem->sizeOfItem();
}

void CFolder::print(bool isHidden) {
    if(isHidden==true) {
        cout << "\nFolder name: " << name;
        cout << "\nFolder size: " <<size;
        cout << "\n---------------------------";
        for(int i=0; i<listOfItem.size(); i++) {
            listOfItem[i]->print(isHidden);
        }
        cout << "\n---------------------------";
    }
    else {
        if(hidden!=true) {
            cout << "\nFolder name: " << name;
            cout << "\nFolder size: " <<size;
            cout << "\n---------------------------";
            for(int i=0; i<listOfItem.size(); i++) {
                listOfItem[i]->print(isHidden);
            }
            cout << "\n---------------------------";
        }
    }
}

CItem* CFolder::removeByName(const string& nameOfFolder) {
    for(int i=0; i<listOfItem.size(); i++) {
        if (listOfItem[i]->getName() == nameOfFolder) {
            listOfItem.erase(listOfItem.begin()+i);
        }
        else {
            listOfItem[i]->removeByName(nameOfFolder);
        }
    }
    return this;
}

CItem* CFolder::findByName(const string& nameOfFolder) {
    CItem* temp = NULL;
    for(int i=0; i<listOfItem.size(); i++) {
        if(listOfItem[i]->getName() == nameOfFolder) {
            temp = listOfItem[i];
        }
        else {
            listOfItem[i]->findByName(nameOfFolder);
        }
    }
    return temp;
}

void CFolder::setHidden(bool setSuper, bool setSub) {
    if(setSub == true) {
        for(int i=0; i<listOfItem.size(); i++) {
            listOfItem[i]->CItem::setHidden(setSuper, setSub);
        }
    } else if(setSub !=true && setSuper == true) {
        hidden = true;

    }
}
