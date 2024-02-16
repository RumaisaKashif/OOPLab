/*
Programmer: Rumaisa Kashif
Date: 16/2/24
Task 4
*/

include <iostream>
#include <string>

using namespace std;

class Smartphone{
    string brand, model, displayResolution;
    int RAM, ROM, storage;
    public:
    void setBrand(const string &b)
    {
        brand=b;
    }
    void setModel(const string &m)
    {
        model=m;
    }
    void setdisplayResolution(const string &d)
    {
        displayResolution=d;
    }
    string getBrand()
    {
        return brand;
    }
    string getModel()
    {
        return model;
    }
    string getdisplayResolution()
    {
        return displayResolution;
    }
    void setRAM(int ram)
    {
        RAM=ram;
    }
    void setROM(int rom)
    {
        ROM=rom;
    }
    void setStorage(int store)
    {
        storage=store;
    }
    int getRAM()
    {
        return RAM;
    }
    int getROM()
    {
        return ROM;
    }
    int getStorage()
    {
        return storage;
    }
    void phoneCall(string contact)
    {
        cout<<"Calling "<<contact<<"..."<<endl;
    }
    void sendMessage(string contact, string message)
    {
        cout<<"Sending Message to "<<contact<<"\n\t"<<message<<endl;
    }
    void connectWifi(string network)
    {
        cout<<"Connecting to "<<network<<" ..."<<endl;
    }
    void browsing()
    {
        cout<<"Surfing the net..."<<endl;
    }
};

int main()
{
    const int MAX_NUM=100;
    Smartphone smartphones[MAX_NUM]; 

    // Test case with one smartphone object
    smartphones[0].setBrand("Apple");
    smartphones[0].setModel("IPhone12 Pro");
    smartphones[0].setdisplayResolution("Good");
    smartphones[0].setRAM(256);
    smartphones[0].setROM(8);
    smartphones[0].setStorage(128);

    cout<<"The first smartphone has the following:\nBrand: "<<smartphones[0].getBrand()<<"\nModel: "<<smartphones[0].getModel()<<"\nDisplay Resolution: "<<smartphones[0].getdisplayResolution()<<"\nRAM: "<<smartphones[0].getRAM()<<"\nROM: "<<smartphones[0].getROM()<<"\nStorage: "<<smartphones[0].getStorage()<<endl;
    cout<<"\n\nAdditional Functionality:\n\n";
    smartphones[0].phoneCall("Friend");
    cout<<"\n";
    smartphones[0].sendMessage("Dad","Hey, how are you?");
    cout<<"\n";
    smartphones[0].connectWifi("PTCL");
    cout<<"\n";
    smartphones[0].browsing();

    // Test case with another smartphone object
    smartphones[1].setBrand("Samsung");
    smartphones[1].setModel("S10");
    smartphones[1].setdisplayResolution("Great");
    smartphones[1].setRAM(200);
    smartphones[1].setROM(6);
    smartphones[1].setStorage(256);

    cout<<"\n\nThe second smartphone has the following:\nBrand: "<<smartphones[1].getBrand()<<"\nModel: "<<smartphones[1].getModel()<<"\nDisplay Resolution: "<<smartphones[1].getdisplayResolution()<<"\nRAM: "<<smartphones[1].getRAM()<<"\nROM: "<<smartphones[1].getROM()<<"\nStorage: "<<smartphones[1].getStorage()<<endl;
    cout<<"\n\nAdditional Functionality:\n\n";
    smartphones[1].phoneCall("Sister");
    cout<<"\n";
    smartphones[1].sendMessage("Mom","Can you please pick me up?");
    cout<<"\n";
    smartphones[1].connectWifi("Stormfiber");
    cout<<"\n";
    smartphones[1].browsing();
}
