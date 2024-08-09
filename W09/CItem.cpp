#include "CItem.h"

CItem::CItem(const string& nameOfItem) {
    name = nameOfItem;
    size = 0;
    readOnly = false;
    hidden = false;
}

CItem::CItem(const string& nameOfItem, int sizeOfItem) {
    name = nameOfItem;
    size = sizeOfItem;
    readOnly = false;
    hidden = false;
}

int CItem::sizeOfItem() {
    return 0;
}

void CItem::print(bool isHidden) {

}

string CItem::getName() {
    return name;
}

CItem* CItem::removeByName(const string& name) {
    return NULL;
}

CItem* CItem::findByName(const string& name) {
    return NULL;
}

void CItem::setHidden(bool setSuper, bool setSub) {
    hidden = true;
}