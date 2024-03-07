#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class ValidateString{
    string test;
    public:
    ValidateString(string teststring):test(teststring){}
    // I am working on the assumption that characters cannot be spaces either, since the question
    // mentions that all characters MUST be alphabets
    bool isValid() const // This ensures that any character within the string being tested is saved from accidental modification
    {
        for (char c: test)
        {
            if (test.empty()) 
            {
                return false; 
            }
            else if  (!isalpha(c)) 
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    cout<<"Rumaisa Kashif, 23K-0744, Q5"<<endl;
    cout<<"Enter string 1 to validate: ";
    string test1;
    getline(cin,test1);
    ValidateString t1(test1);
    if(t1.isValid()) 
    {
        cout << "The entered string is valid." << endl;
    }
    else
    {
        cout << "The entered string is not valid." << endl;
    }

    cout<<"\nEnter string 2 to validate: ";
    string test2;
    getline(cin,test2);
    ValidateString t2(test2);
    if(t2.isValid()) 
    {
        cout << "The entered string is valid." << endl;
    }
    else
    {
        cout << "The entered string is not valid." << endl;
    }
}
