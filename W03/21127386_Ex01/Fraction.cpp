#include "Fraction.h"

void Fraction::input() {
    cout << "\nInput fraction: ";
    cin >> num >> den;

    if (den == 0) {
        cout << "Math error";
        input();
    }
}

int Fraction::gcd(int a, int b) {
    if (a==b) return a;
    if (a>b) return gcd(a-b, b);
    return gcd(b, b-a);
}

void Fraction::reduce(){
    int c=gcd(num, den);
    num=num/c;
    den=den/c;
}

ostream& operator <<(ostream& out, const Fraction &f) {
	out << f.num <<"/" << f.den;
	return out;
}

Fraction Fraction:: operator =(const Fraction &f) {
    if(this != &f) {
        num=f.num;
        den=f.den;
    }
    reduce();
    return *this;
}

Fraction Fraction::operator +(Fraction f) {
    Fraction c;
    c.num=num*f.den+f.num*den;
    c.den=den*f.den;
    c.reduce();

    return c;
}

Fraction Fraction::operator -(Fraction f) {
    Fraction c;
    c.num=num*f.den-f.num*den;
    c.den=den*f.den;
    c.reduce();

    return c;
}

Fraction Fraction::operator *(Fraction f) {
    Fraction c;
    c.num=num*f.num;
    c.den=den*f.den;
    c.reduce();

    return c;
}

Fraction Fraction::operator /(Fraction f) {
    Fraction c;
    c.num=num*f.den;
    c.den=den*f.num;

    if (c.den==0) {
        cout << "Math error";
    }
    c.reduce();

    return c;
}

bool Fraction::operator ==(Fraction f) {
    int t1, t2;
    t1=num*f.den;
    t2=f.num*den;

    if (t1==t2) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator !=(Fraction f) {
    int t1, t2;
    t1=num*f.den;
    t2=f.num*den;

    if (t1!=t2) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator >=(Fraction f) {
    int t1, t2;
    t1=num*f.den;
    t2=f.num*den;

    if (t1>=t2) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator >(Fraction f) {
    int t1, t2;
    t1=num*f.den;
    t2=f.num*den;

    if (t1>t2) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator <=(Fraction f) {
    int t1, t2;
    t1=num*f.den;
    t2=f.num*den;

    if (t1<=t2) {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::operator <(Fraction f) {
    int t1, t2;
    t1=num*f.den;
    t2=f.num*den;

    if (t1<t2) {
        return true;
    }
    else {
        return false;
    }
}

Fraction Fraction::operator +(int n) {
    Fraction c;
    c.num=num+n*den;
    c.den=den;

    c.reduce();
    return c;
}

Fraction Fraction::operator -(int n) {
    Fraction c;
    c.num=num-n*den;
    c.den=den;


    c.reduce();
    return c;
}

Fraction operator +(int n, Fraction f) {
    Fraction c;
    c.num=f.num+n*f.den;
    c.den=f.den;

    c.reduce();
    return c;
}

Fraction operator *(int n, Fraction f) {
    Fraction c;
    c.num=n*f.num;
    c.den=f.den;

    c.reduce();
    return c;
}

void Fraction::operator +=(Fraction f) {
    Fraction c;
    c.num=num;
    c.den=den;
    c=c+f;
    num=c.num;
    den=c.den;
}

void Fraction::operator -=(Fraction f) {
    Fraction c;
    c.num=num;
    c.den=den;
    c=c-f;
    num=c.num;
    den=c.den;
}

void Fraction::operator *=(Fraction f) {
    Fraction c;
    c.num=num;
    c.den=den;
    c=c*f;
    num=c.num;
    den=c.den;
}

void Fraction::operator /=(Fraction f) {
    Fraction c;
    c.num=num;
    c.den=den;
    c=c/f;
    num=c.num;
    den=c.den;
}

Fraction Fraction::operator ++() {
    num=num+den;
    return *this;
}

Fraction Fraction::operator ++(int) {
    Fraction c=*this;
    ++(*this);
    return c;
}

Fraction Fraction::operator --() {
    num=num-den;
    return *this;
}

Fraction Fraction::operator --(int n) {
    Fraction c=*this;
    --(*this);
    return c;
}




