#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class File {
private:
    int size;
    string fileName;
public:
    void input();
    void split();
    void join();
};