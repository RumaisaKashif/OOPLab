#include <iostream>
using namespace std;
class Loanhelper{
    const double interestrate;
    double loanamt;
    double months;
    public:
    Loanhelper(double i, double a, double m):interestrate(i),loanamt(a),months(m){}
    void setloan(double l)
    {
        loanamt=l;
    }
    void setmonths(int m)
    {
        months=m;
    }
    void calculateLoan()
    {
        double payable=loanamt/months;
        double total=payable+(interestrate*payable);
        cout<<"You have to pay "<<total<<" every month for "<<months<<" months."<<endl;
    }
};

int main()
{
    cout<<"Rumaisa Kashif, 23K-0744, Q5"<<endl;
    cout << "Enter the Interest Rate : ";
    double interest;
    cin>>interest;
    if (interest>=0 && interest<=0.5)
    {
        
    }
    else
    {
        cout<<"Invalid interest rate. Interest rate should be between 0-0.5%."<<endl;
        return 0;
    }
    cin.ignore();
    Loanhelper l1(interest, 1200, 12);
    l1.calculateLoan();
    return 0;
}
