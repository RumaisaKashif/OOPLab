/*
Programmer: Rumaisa Kashif
Roll Number: 23K-0744
Date: 15/2/2024
TASK 1
*/

#include <iostream>

using namespace std;

class Book {

    public:
    string name;
    string author;
    int ISBNnum;
    int totalPages;
    int pagesRead;
    //Default Constructor
    Book(){
        name = "Harry Potter and the Philosopher's Stone";
        author = "JK Rowling";
        ISBNnum = 1234567;
        totalPages = 500;
        pagesRead = 50;
    }
   
    //Parameterized constructor
    Book(string Name, string Author, int ISBN, int total, int read){
        name = Name;
        author = Author;
        ISBNnum = ISBN;
        totalPages = total;
        pagesRead = read;
    }
    
    void setRead(int pgsRead)
    {
        pagesRead+=pgsRead;
    }
    
    void tally()
    {
        if (pagesRead>=totalPages)
        {
            cout<<"Book finished."<<endl;
        }
    }
    
    void displayInfo()
    {
        cout<<"Book name: "<<name<<endl;
        cout<<"Book author: "<<author<<endl;
        cout<<"Book ISBN Number: "<<ISBNnum<<endl;
        cout<<"Book pages: "<<totalPages<<endl;
        cout<<"Pages read: "<<pagesRead<<endl;
    }
};

int main() {
   Book book("Percy Jackson", "Rick Riordrian", 1222222, 600, 570);
   book.displayInfo();
   cout<<"\n\nDisplaying information after adding pages read."<<endl;
   book.setRead(30);
   book.tally();
   book.displayInfo();
    return 0;
}

