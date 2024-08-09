#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class A{
private:
    char *m_s;
public:
    A() { m_s = strdup("default"); }
    A(char* s) { m_s = s; }
    ~A() { delete []m_s; }

    friend istream& operator >>(istream& in, A &a) {
        char buff[1024];
        int count = 0;
        int j = 0;
        in.getline(buff, 1024);

        while(buff[j]!='\0') {
            count++;
            j++;
        }
        a.m_s = new char [count + 1];
        for(int i=0; i< count +1; i++) {
            a.m_s[i]=buff[i];
        }

        return in;
    }
    virtual void prepare() { cout << "A "; }
    void display() {
        prepare();
        cout << m_s << endl;
    }
};

class B: public A {
public:
    B(char *s) : A(s) { }
    B(const B &b) { }
    void prepare() { cout << "B"; }
};

void foo(A* obj1, A obj2) {
    obj1->display();
    obj2.display();
}

int main() {
    B obj1("text");
    A *obj2= new B(obj1);
    foo(&obj1, *obj2);

    delete []obj2;
    return 0;
}