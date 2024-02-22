#include <iostream>
#include <string>

using namespace std;

class Office 
{
private:
    string Location;
    int seatingCapacity;
    string* Furniture; 

public:
    Office(string location=" ", int capacity=0, int maxsize=0)
        : Location(location), seatingCapacity(capacity) {
            Furniture = new string[maxsize]; 
        }

    ~Office() 
    {
        delete[] Furniture; 
    }

    void setFurniture(int index, string fpiece) 
    {
        if (index>=0 && index<3) 
        {
            Furniture[index]= fpiece;
        }
        else{
        cout<<"Invalid index"<<endl;}
    }

    // Function to display office details
    void display() 
    {
        cout<<"Location: "<<Location<<endl;
        cout<<"Seating Capacity: "<<seatingCapacity<<endl;
        cout<<"Furniture: "<<endl;
        for(int i=0; i<3; i++)
        {
            cout<<Furniture[i]<<endl;
        }
    }
};

int main() 
{
    Office* office = new Office("Regent Street", 400, 3);
    office->setFurniture(0, "Desk");
    office->setFurniture(1, "Fax Machine");
    office->setFurniture(2, "Printer");

    cout<<"Displaying office details:"<<endl;
    office->display();
    delete office;
    return 0;
}
