#include "League.h"

void League::input() {
    cout <<"\nInput the league name: ";
    cin >> name;
    cout << "\nInput matches information: ";
    cout << "\nInput number of matches: ";
    int size;
    cin >> size;

    Result rTemp;
    for (int i=0; i<size; i++) {
        rTemp.Result::input();
        listOfMatch.push_back(rTemp);
    }
}

void League::total() {
    int totalNumberGoals=0;
    int totalHomeTeamGoals=0;
    int totalAwayTeamGoals=0;

    for (int i=0; i<listOfMatch.size(); i++) {
        totalNumberGoals=totalNumberGoals+listOfMatch[i].getHomeGoals() +
                            listOfMatch[i].getAwayGoals();
        totalHomeTeamGoals=totalHomeTeamGoals+listOfMatch[i].getHomeGoals();
        totalAwayTeamGoals=totalAwayTeamGoals+listOfMatch[i].getAwayGoals();
    }
    cout <<"\nTotal number of goals: ";
    cout << totalNumberGoals;
    cout <<"\nTotal home team goals: ";
    cout << totalHomeTeamGoals;
    cout <<"\nTotal away team goals: ";
    cout << totalAwayTeamGoals;
}

void League::findTeam() {
    int point=0;
    string findName;
    cout <<"\nEnter the name of team: ";
    cin >> findName;
    for (int i=0; i<listOfMatch.size(); i++) {
        if (listOfMatch[i].getHomeTeam()==findName) {
            if(listOfMatch[i].compare()==1) {
                point=point+3;
            }
            else if(listOfMatch[i].compare()==0) {
                point=point+1;
            }
        }
        if (listOfMatch[i].getAwayTeam()==findName) {
            if(listOfMatch[i].compare()==-1) {
                point=point+3;
            }
            else if(listOfMatch[i].compare()==0) {
                point=point+1;
            }
        }
    }
    cout <<"\nPoint of that team: ";
    cout << point;
}