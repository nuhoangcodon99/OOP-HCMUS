#include <iostream>
#include <cmath>
using namespace std;

class Payment {
private:
    unsigned long int loan;
    float rate;
    int years;
public:
    Payment();
    ~Payment();

    void setLoan();
    void setRate();
    void setYear();

    double monthlyPayment();
    double totalPaid();
};