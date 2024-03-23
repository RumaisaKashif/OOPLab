#include <iostream>

using namespace std;

class Vehicle
{
    string make,model;
    int year;
    public:
    Vehicle(string mk,string md,int y)
    {
        make=mk; 
        model=md;
        year=y;
    }
    void display()
    {
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

class Car: public Vehicle
{
    int numdoors;
    string fuelefficiency;
    public:
    Car(int doors, string fuel, string mk,string md,int y): Vehicle(mk,md,y),numdoors(doors),fuelefficiency(fuel) {}
    void display()
    {
        cout<<"Number of doors: "<<numdoors<<endl;
        cout<<"Fuel efficiency: "<<fuelefficiency<<endl;
        Vehicle::display();
    }
};

class ElectricCar: public Car
{
    int batterylife;
    public:
    ElectricCar(int b, int doors, string fuel, string mk,string md,int y): batterylife(b), Car(doors,fuel,mk,md,y){}
    void display()
    {
        cout<<"Battery life: "<<batterylife<<endl;
        Car::display();
    }
};

int main()
{
    cout<<"Rumaisa Kashif\t23k0744\n"<<endl;
    ElectricCar ev(48, 4,"great", "audi etron", "1", 2021);
    ev.display();
}
