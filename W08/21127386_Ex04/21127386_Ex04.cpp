#include "Castle.h"

int main() {
    Prince p;
    Castle c;
    c.input();
    p.input();
    if(c.checkGame(p)==true) {
        cout <<"\nYour Prince can rescue the Princess";
        p.output();
    } else {
        cout << "\nYour Prince can not rescue the Princess";
    }

    return 0;
}