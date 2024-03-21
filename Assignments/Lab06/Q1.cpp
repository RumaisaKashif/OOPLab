#include <iostream>

using namespace std;

class BankAccount
{
    int accountId;
    double balance;
    int numTransactions;
    int* transactionHistory;
    public:
    BankAccount(int id, double amount, int numtransactions) : accountId(id),balance(amount),numTransactions(numtransactions){
        transactionHistory=new int[numTransactions];
    }
    BankAccount(const BankAccount& obj)
    {
        accountId=obj.accountId;
        balance=obj.balance;
        numTransactions=obj.numTransactions;
        transactionHistory=new int[numTransactions];
        for (int i=0; i<numTransactions; i++) 
        {
            transactionHistory[i]=obj.transactionHistory[i];
        }
    }
    ~BankAccount()
    {
        delete[] transactionHistory;
    }
    void display()
    {
        cout<<"Account ID: "<<accountId<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Number of transactions: "<<numTransactions<<endl;
        for (int i=0;i<numTransactions;i++)
        {
            cout<<"Transaction "<<i+1<<". : "<<transactionHistory[i]<<endl;
        }
    }
    void updateTransactionHistory(const int* transactionHist, int numTransactions) 
    {
        delete [] transactionHistory;
        this->numTransactions= numTransactions;
        transactionHistory= new int[numTransactions];
        for (int i= 0; i<numTransactions; i++) 
        {
            transactionHistory[i]=transactionHist[i];
        }
    }
};

int main()
{
    cout<<"Rumaisa Kashif, BS AI 2A, 23K0744"<<endl;
    BankAccount acc1(123, 2000.0, 3);
    BankAccount acc2=acc1;
    acc1.display();
    cout<<"\n--------------------------------"<<endl;
    acc2.display();
    cout<<"\n--------------------------------"<<endl;
    int newTransactions[] = { 200,300,400,500};
    int numNewTransactions = sizeof(newTransactions)/sizeof(newTransactions[0]);
    acc1.updateTransactionHistory(newTransactions, numNewTransactions);
    acc1.display();
    return 0;
}
