#include "Question.h"

Question::Question() {
}

vector<Question> Question::listQuestion(string fileName) {
    ifstream fin;
    fin.open(fileName);
    string sTemp;
    Question qTemp;
    vector<Question> vTemp;

    while(!fin.eof()) {
        getline(fin, qTemp.ques, '\n');
        getline(fin, qTemp.ans1, '\n');
        getline(fin, qTemp.ans2, '\n');
        getline(fin, qTemp.ans3, '\n');
        getline(fin, qTemp.ans4, '\n');
        getline(fin, qTemp.correctAns, '\n');
        vTemp.push_back(qTemp);
    }
    fin.close();
    return vTemp;
}

void Question::display(int& score) {
    string playerAns;
    cout << "\n" << ques << endl;
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
    cout << "\nYour answer is: ";
    cin >> playerAns;
    if (playerAns==correctAns) {
        cout << "\nCorrect";
        score++;

    } else {
        cout << "\nIncorrect";
        cout << "\nCorrect answer is: " << correctAns;
    }
    cout << "\n--------------------";
}

void Question::displayRandom(vector<Question> q, int number,int& score) {
    *this=q[number];
    this->display(score);
}

void Question::print(int r, int& score) {
    vector<Question> q;
    q=this->listQuestion("ListQuestion.txt");
    this->displayRandom(q, r, score);
}