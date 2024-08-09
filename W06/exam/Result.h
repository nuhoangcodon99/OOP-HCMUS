#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Result {
private:
    string homeTeam;
    string awayTeam;
    int goalHomeTeam;
    int goalAwayTeam;
public:
    void input();
    string getHomeTeam();
    string getAwayTeam();
    int getHomeGoals();
    int getAwayGoals();
    int compare();
};