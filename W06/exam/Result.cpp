#include "Result.h"

void Result::input() {
    cout << "\nInput result: ";
    cout << "\nInput name of home team: ";
    cin >> homeTeam;
    cout << "\nInput goals of home team: ";
    cin >> goalHomeTeam;
    cout << "\nInput name of away team: ";
    cin >> awayTeam;
    cout << "\nInput goals of away team: ";
    cin >> goalAwayTeam;
}

string Result::getHomeTeam() {
    return homeTeam;
}

string Result::getAwayTeam() {
    return awayTeam;
}

int Result::getHomeGoals() {
    return goalHomeTeam;
}

int Result::getAwayGoals() {
    return goalAwayTeam;
}

int Result::compare() {
    if(goalHomeTeam<goalAwayTeam) return -1;
    else if (goalHomeTeam>goalAwayTeam) return 1;
    else {
        return 0;
    }
}

