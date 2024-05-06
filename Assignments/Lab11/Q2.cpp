#include <iostream>
// Have not made main function because the question did not state the requirement
using namespace std;
class Account{
    protected:
    int accountNumber;
    double balance;
    
    public:
    int getAccountNumber(){return accountNumber;}
    double getBalance(){return balance;}

    virtual void deposit(double dep)=0;
    virtual void withdrawal(double wd)=0;
    virtual void calculateInterest()=0;
    // void deposit(double dep){balance+=dep;cout<<"PKR "<<dep<<
    // " has been deposited to the account. New balance is: PKR "<<balance<<endl;} 
    // void withdrawal(double wd) {
    //     try{
    //         if (wd <= balance) {
    //             balance -= wd; cout << "PKR " << wd << 
    //             " has been withdrawn from the account. New balance is: PKR "<<balance<<endl;
    //         }
    //         else
    //         {
    //             throw ("Insufficient Balance\n");
    //         }
    //     }
    //     catch(const char* msg){
    //         cout<<"Error. "<<msg;
    //     }
    // }
};

class SavingsAccount:public Account{
    double interestrate;
    public:
    void deposit(double dep){balance+=dep;cout<<"PKR "<<dep<<
    " has been deposited to the savings account. New balance is: PKR "<<balance<<endl;}
    void withdrawal(double wd) {
        try{
            if (wd <= balance) {
                balance -= wd; cout << "PKR " << wd << 
                " has been withdrawn from the savings account. New balance is: PKR "<<balance<<endl;
            }
            else
            {
                throw ("Insufficient Balance!\n");
            }
        }
        catch(const char* msg){
            cout<<"Error from savings account. "<<msg;
        }
    }
    void calculateInterest(){
        cout<<"Interest from savings account: PKR "<<balance*0.12<<endl;
    }
};

class CurrentAccount:public Account{
    double overdraftlimit;
    public:
    void deposit(double dep){balance+=dep;cout<<"PKR "<<dep<<
    " has been deposited to the current account. New balance is: PKR "<<balance<<endl;}
    void withdrawal(double wd) {
        try{
            if (wd <= balance) {
                balance -= wd; cout << "PKR " << wd << 
                " has been withdrawn from the current account. New balance is: PKR "<<balance<<endl;
            }
            else
            {
                throw ("Insufficient Balance!\n");
            }
        }
        catch(const char* msg){
            cout<<"Error from current account. "<<msg;
        }
    }
    void calculateInterest(){
        cout<<"Interest from current account does not exist."<<endl;
    }
};
int main() {

    return 0;
}
