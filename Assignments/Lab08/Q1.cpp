#include <iostream>
using namespace std;

class Book 
{
    string title;
    string author;
    string publisher;
public:
    Book(string title, string author, string publisher) 
    {
        this->title=title;
        this->author=author;
        this->publisher=publisher;
    }
    void display() 
    {
        cout<<"Title: "<<title << endl;
        cout<<"Author: "<<author << endl;
        cout<<"Publisher: "<<publisher << endl;
    }
};

class FictionBook: public Book 
{
    string genre;
    string protagonist;
public:
    FictionBook(string t, string a, string p, string g, string prot): Book(t, a, p), genre(g), protagonist(prot) {}

    void display() 
    {
        Book::display();
        cout<<"Genre: "<<genre<<endl;
        cout<<"Protagonist: "<<protagonist<<endl;
    }
};

int main() 
{
    cout<<"Rumaisa Kashif\t23k0744\n"<<endl;
    FictionBook fiction("The Kite Runner", "Khalid Hussaini", "Penguin Books", "Fiction", "Hassan");
    fiction.display();
    return 0;
}
