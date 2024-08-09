#include "Player.h"

int& Player::getScore() {
    return score;
}

void Player::playGame() {
    srand((int)time(0));
    int r;
    map<int, bool> ran;
    
    for(int i = 0; i < 5; ++i){
        //random so neu trung thi random lai
        do{
            r = minNum + rand() % (maxNum + 1 - minNum);
        }while(ran.find(r) != ran.end());
        Question q;
        q.print(r, getScore());
        ran[r] = true;
    }
}

void Player::compare(Player a) {
    if (score>a.score) {
        cout << "\nPlayer 1 win";
    }
    else if (score<a.score) {
        cout <<"\nPlayer 2 win";
    }
    else {
        cout <<"\nThe result is drawn";
    }
}