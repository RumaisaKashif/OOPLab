/*
Programmer: Rumaisa Kashif
Date: 11/2/2024
*/

#include <iostream>
using namespace std;
struct Product{
    int id;
    string name;
    float price;
    int quantity;
};

void addProduct(Product P[], int& n);
void displayProduct(Product P[], int n);
void updateProduct(Product P[], int n);

int main()
{
    const int MAX_NUM=100;
    Product P[MAX_NUM];
    bool isTrue=true;
    int n=0;
    while (isTrue)
    {
        cout<<"Choose an option from the list below:\n1. Add new product.\n2. Display product information\n3. Update product information.\n4. Exit"<<endl;
        int option;
        cin>>option;
        cin.ignore();
        if (option==1)
        {
            cout<<"Add a new product:"<<endl;
            addProduct(P, n);
        }
        else if (option==2)
        {
            cout<<"Displaying product information:"<<endl;
            displayProduct(P, n);
        }
        else if (option==3)
        {
            cout<<"Update product:"<<endl;
            updateProduct(P,n);
        }
        else if (option==4)
        {
            isTrue=false;
        }
        else
        {
            cout<<"Please enter valid option."<<endl;
            return 0;
        }
    }
}

void addProduct(Product P[], int &n)
{
    cout<<"Enter product id: ";
    cin>>P[n].id;
    cin.ignore();
    cout<<"Enter product name: ";
    getline(cin,P[n].name);
    cout<<"Enter product quantity: ";
    cin>>P[n].quantity;
    cout<<"Enter product price per item: ";
    cin>>P[n].price;
    n++;
    cout<<"Product added succesfully!"<<endl;
}

void displayProduct(Product P[], int n)
{
    cout<<"Enter the product id of the product that you wish to have displayed. ";
    int id;
    cin>>id;
    bool found=false;
    for (int i=0;i<n;i++)
    {
        if (P[i].id == id)
        {
            cout<<"Product found. Displaying product details:"<<endl;
            cout<<"Product name: "<<P[i].name<<endl;
            cout<<"Product quantity: "<<P[i].quantity<<endl;
            cout<<"Product price per item: "<<P[i].price<<endl;
            found=true;
            break;
        }
    }
    if (!found)
    {
        cout<<"Product not found in the database."<<endl;
    }
}

void updateProduct(Product P[], int n)
{
    cout<<"Enter the product id of the product that you wish to update. ";
    int id;
    cin>>id;
    cin.ignore();
    for (int i=0;i<n;i++)
    {
        if (P[i].id == id)
        {
            cout<<"Product found. Updating product information..."<<endl;
            cout<<"Enter new product name: ";
            getline(cin,P[i].name);
            cout<<"Enter new product quantity: ";
            cin>>P[i].quantity;
            cout<<"Enter new product price: ";
            cin>>P[i].price;
            return ;
        }
    }
    cout<<"Product not found in database."<<endl;
}
