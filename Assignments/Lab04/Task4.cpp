#include <iostream>
#include <string>
#include <array>

using namespace std;

class Office {
private:
    string Location;
    int seatingCapacity;
    array<string, 3> Furniture; 

public:
    Office(string location=" ", int capacity=0, array<string, 3> furniture = {"", "", ""})
        : Location(location), seatingCapacity(capacity), Furniture(furniture) {}

    void displayDetails() 
    {
        cout<<"Location: "<<Location<<endl;
        cout<<"Seating capacity: "<<seatingCapacity<<endl;
        cout<<"Furniture: "<<endl;
        for (int i=0;i<3;i++)
        {
            cout<<Furniture[i]<<endl;
        }
    }
};

int main() 
{
    Office o1; 
    Office o2("Park Lane", 400); 
    array<string, 3> f = {"Desk", "Chair", "Fax"}; 
    Office o3("Totem Street", 100, f); 

    cout<<"Office #1:"<<endl;
    o1.displayDetails();
    cout<<"\nOffice #2:"<<endl;
    o2.displayDetails();
    cout<<"\nOffice #3:"<<endl;
    o3.displayDetails();
    return 0;
}
