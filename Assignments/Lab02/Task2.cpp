/*
Programmer: Rumaisa Kashif
Date: 11/2/2024
*/

#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int yop;
    string genre;
};

// Function prototypes
void searchAndDisplayBook(Book books[], int num);
void updateBook(Book books[], int num);
void addBook(Book books[], int& num);

int main() 
{
    const int MAX_NUM = 100;
    Book books[MAX_NUM];
    int num = 0;
    bool isTrue = true;

    while (isTrue) 
    {
        cout << "Please choose your desired operation from the menu:\n1. Find a book\n2. Add a book\n3. Update existing book data\n4. Exit" << endl;
        int pick;
        cin >> pick;
        cin.ignore(); 
        if (pick == 1) 
        {
            searchAndDisplayBook(books, num);
        } 
        else if (pick == 2) 
        {
            addBook(books, num);
        } 
        else if (pick == 3) 
        {
            updateBook(books, num);
        } 
        else if (pick == 4) 
        {
            isTrue = false;
        } 
        else 
        {
            cout << "Please enter a valid option." << endl;
            exit(0);
        }
    }
    return 0;
}

void searchAndDisplayBook(Book books[], int num) 
{
    cout << "Choose one of the following options to search your desired book.\n1. Search by title\n2. Search by author" << endl;
    int option;
    cin >> option;
    cin.ignore(); 
    if (option == 1) 
    {
        string title;
        cout << "Enter the title of the Book you would like to see." << endl;
        getline(cin, title);
        for (int i = 0; i < num; i++) 
        {
            if (books[i].title == title) 
            {
                cout << "Book found!" << endl;
                cout << "Book title: " << books[i].title << endl;
                cout << "Book author: " << books[i].author << endl;
                cout << "Book year of publication: " << books[i].yop << endl;
                cout << "Book genre: " << books[i].genre << endl;
                return;
            }
            cout << "Book not found." << endl;
        }
    } 
    else if (option == 2)
    {
        string author;
        cout<< "Enter the author's name:" <<endl;
        getline(cin, author);
        for (int i = 0;i < num; i++)
        {
            if (books[i].author == author)
            {
                cout << "Book found!" << endl;
                cout << "Book title: " << books[i].title << endl;
                cout << "Book author: " << books[i].author << endl;
                cout << "Book year of publication: " << books[i].yop << endl;
                cout << "Book genre: " << books[i].genre << endl;
                break;
            }
            cout << "Book not found." << endl;
        }
    }
    
}

void updateBook(Book books[], int num)
{
    cout << "Please enter the title of the Book that you wish to update." << endl;
    string t;
    getline(cin, t);
    for (int i = 0; i < num; i++) 
    {
        if (books[i].title == t) 
        {
            int leave = 0;
            while (leave != 5) 
            {
                cout << "Please specify the information you wish to update\n1. Title\n2. Author\n3. Year of publication\n4. Genre\n5. Exit" << endl;
                int option;
                cin >> option;
                cin.ignore(); // Ignore newline character
                if (option == 1) 
                {
                    cout << "Enter the new title." << endl;
                    getline(cin, books[i].title);
                    cout << "Title updated." << endl;
                } 
                else if (option == 2)
                {
                    cout << "Enter the new Author." << endl;
                    getline(cin, books[i].author);
                    cout << "Author updated." << endl;
                } 
                else if (option == 3) 
                {
                    cout << "Enter the new year of publication." << endl;
                    cin >> books[i].yop;
                    cout << "Year of publication updated." << endl;
                } 
                else if (option == 4) 
                {
                    cout << "Enter the new genre." << endl;
                    getline(cin, books[i].genre);
                    cout << "Genre updated." << endl;
                } 
                else if (option == 5) 
                {
                    cout << "Book details have been updated." << endl;
                    leave = 5;
                }
            }
            return;
        }
    }
    cout << "No such book exists." << endl;
}

void addBook(Book books[], int& num) 
{
    cout << "Enter the title: " << endl;
    getline(cin, books[num].title);
    cout << "Enter the author: " << endl;
    getline(cin, books[num].author);
    cout << "Enter the year of publication: " << endl;
    cin >> books[num].yop;
    cin.ignore(); // Ignore newline character
    cout << "Enter the genre: " << endl;
    getline(cin, books[num].genre);
    num++;
    cout << "Book added successfully." << endl;
}
