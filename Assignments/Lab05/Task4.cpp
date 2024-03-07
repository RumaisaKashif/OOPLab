#include <iostream>

using namespace std;

class bankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;
    public:
    bankAccount()
    {}
    bankAccount(int accountNumber,string accountHolderName,double balance)
    {
        this->accountNumber=accountNumber;
        this->accountHolderName=accountHolderName;
        this->balance=balance;
    }
    void deposit(double dep)
    {
        balance+=dep;
    }
    void withdraw(double wd)
    {
        if (balance<wd)
        {
            cout<<"Insufficient balance!"<<endl;
        }
        else{
            balance-=wd;
        }
    }
    void display()
    {
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Acount balance: "<<balance<<endl;
        if (balance<=0)
        {
            cout<<"Warning: low balance."<<endl;
        }
    }
};

int main(){
    cout<<"Rumaisa Kashif, 23K-0744, Q5"<<endl;
    bankAccount accounts[3];
    accounts[0]=bankAccount(12, "Areeba Hasnain", 0);
    accounts[1]=bankAccount(13, "Emman Abrar", 100);
    accounts[2]=bankAccount(14, "Rumaisa Kashif", 50);
    for (int i=0;i<3;i++)
    {
        accounts[i].display();
        cout<<endl;
    }
    for (int i=0;i<3;i++)
    {
        cout<<"\nDepositing and subsequently withdrawing from account #"<<i+1<<endl;
        accounts[i].deposit(0);
        accounts[i].withdraw(200.0);
        cout<<"Displaying updated information:"<<endl;
        accounts[i].display();
    }
}
