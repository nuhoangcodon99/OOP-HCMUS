#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <map>
#define minNum 0 //define dua vao file txt
#define maxNum 9 //define dua vao file txt

using namespace std;

class Question {
private:
    string ques;
    string ans1;
    string ans2;
    string ans3;
    string ans4;
    string correctAns;
public:
    Question();
    vector<Question> listQuestion(string);
    void display(int&);
    void displayRandom(vector<Question>, int, int&);
    void print(int, int&);

};