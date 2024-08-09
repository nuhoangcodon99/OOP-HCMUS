#include "Question.h"

class Player {
private:
    int score=0;
public:
    void playGame();
    void compare(Player);
    int& getScore();

};