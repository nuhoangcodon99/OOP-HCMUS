#include "Player.h"

//random 5 cau hoi trong bo cau hoi o moi luot choi
int main() {
    Player p1;
    Player p2;

    system("cls");
    cout << "\nPlayer 1 turns:";
    p1.playGame();
    system("cls");
    cout << "\nPlayer 2 turns:";
    p2.playGame();
    system("cls");
    p1.compare(p2);
    return 0;
}