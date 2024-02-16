/*
Programmer: Rumaisa Kashif
Date: 16/2/24
Task 5
*/
#include <iostream>
#include <string>

using namespace std;

class Stationary{
    public:
    string items[5];
    int prices[5];
};

void addInfo(Stationary &s, string itemName, int price);
void retrieveList(Stationary s);
void modifyPrices(Stationary &s);
void displayInfo(Stationary s);
void generateReceipt(Stationary s);

int main()
{
    Stationary s;
    cout<<"Welcome to the Stationary Shop."<<endl;
    bool isTrue=true;
    int c=0;
    while (isTrue)
    {
        if (c>5)
        {
            break;
        }
        cout<<"Choose an option from the menu given below.\n1. Add information\n2. Retrieve items list\n3. Modify item information\n4. Display price list\n5. Exit"<<endl;
        int option;
        cin>>option;
        cin.ignore();
        if (option==1)
        {
            cout<<"Please enter item name: ";
            string item;
            getline(cin,item);
            cout<<"Please enter item price: ";
            int price;
            cin>>price;
            cin.ignore();
            addInfo(s,item,price);
        }
        else if (option==2)
        {
            retrieveList(s);
        }
        else if (option==3)
        {
            modifyPrices(s);
        }
        else if (option==4)
        {
            displayInfo(s);
        }
        else if (option==5)
        {   
            isTrue=false;
        }
        else{
            cout<<"Invalid option.";
        }
        c++;
    }
    cout<<"Do you wish to generate receipt? Yes (1) or No (0)";
    int opt;
    cin>>opt;
    cin.ignore();
    if (opt==1){
        generateReceipt(s);
    }
    else
    {
        return 0;
    }
}

void addInfo(Stationary &s, string itemName, int price)
{
    for (int i=0;i<5;i++)
    {
        if (s.items[i].empty())
        {
            s.items[i]=itemName;
            s.prices[i]=price;
            cout<<"Item added."<<endl;
            break;
        }
    }
}

void retrieveList(Stationary s)
{
    cout<<"Item List is as follows:"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<s.items[i]<<endl;
    }
}

void modifyPrices(Stationary &s)
{
    cout<<"Enter the name of the item you want to change: ";
    string itemName;
    getline(cin,itemName);
    for (int i=0;i<5;i++)
    {
        if(itemName==s.items[i])
        {
            cout<<"Current Price: "<<s.prices[i]<<endl;
            cout<<"New Price: ";
            int newPrice;
            cin>>newPrice;
            s.prices[i]=newPrice;
            cout<<"Price changed successfully!"<<endl;
            break;
        }
    }
}

void displayInfo(Stationary s)
{
    cout<<"Displaying price list."<<endl;
    for (int i=0;i<5;i++)
    {
        if (!s.items[i].empty())
        {
            cout<<s.items[i]<<"\t\t$"<<s.prices[i]<<endl;
        }
    }
}

void generateReceipt(Stationary s)
{
    int totalCost = 0;
    bool isTrue=true;
    cout<<"Generating Receipt:" << endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Item Name\tQuantity\tPrice\tSubtotal"<<endl;
    cout<<"---------------------------------------------"<<endl;
    while (isTrue)
    {
        cout << "Enter item name. Enter '0' to finish adding items: ";
        string name;
        getline(cin, name);
        if (name=="0")
        {
            isTrue=false;
            break;
        }
        bool itemFound=false;
        for (int i=0; i<5; i++)
        {
            if (name==s.items[i])
            {
                cout<<"Enter quantity of "<<s.items[i]<<" bought: ";
                int qty;
                cin>>qty;
                cin.ignore();
                cout<<s.items[i]<<"\t\t";
                cout<<qty<<"\t\t";
                cout<<"$"<< s.prices[i]<<"\t";
                int subtotal=s.prices[i]*qty;
                totalCost+=subtotal;
                cout<<"$"<<subtotal<<endl;
                itemFound=true;
                break;
            }
        }
        if (!itemFound)
        {
            cout<<"Item not found."<<endl;
        }
    }
    cout<<"---------------------------------------------"<<endl;
    cout<<"Total Cost:\t\t\t\t$"<<totalCost<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Thank you for shopping."<<endl;
}
