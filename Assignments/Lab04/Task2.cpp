#include <iostream>
using namespace std;

class Book{
    string name;
    string author;
    int ISBNnum;
    int totalpages;
    int pagesread;
public:
    Book(): name(""), author(""), ISBNnum(),  totalpages(1000), pagesread(0) {} 
    void setName (string bookname)
    {
        name = bookname;
    }
    void setAuthor(string authorname)
    {
        author=authorname;
    }
    void setISBN(int ISBN)
    {
        ISBNnum=ISBN;
    }
    void showBookInfo()
    {
        cout<<"Displaying Book information\n"<<endl;
        cout<<"Book name: "<<name<<endl;
        cout<<"Author's name: "<<author<<endl;
        cout<<"ISBN number: "<<ISBNnum<<endl;
        cout<<"Total Pages: "<<totalpages<<endl;
        cout<<"Pages Read: "<<pagesread<<endl;
    }
    void updatePagesRead(int pages) 
    {
        pagesread+=pages;
        if (pagesread>=totalpages) 
        {
            cout<<"\nBook finished!"<<endl;
        }
    }
};

int main()
{
    Book myBook;
    myBook.setName("The Alchemist");
    myBook.setAuthor("Paulo Coelho");
    myBook.setISBN(1234567);
    myBook.showBookInfo();
    
    cout<<"Enter the number of pages you have read today: ";
    int pages;
    cin>>pages;
    cin.ignore();
    myBook.updatePagesRead(pages);
    cout<<"\n";
    myBook.showBookInfo();
    return 0;
}
