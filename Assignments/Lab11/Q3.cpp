#include <iostream>
// Have not made the main function since the question did not state any such requirement
using namespace std;
class Vehicle{
    protected:
    string make, model;
    int speed;
    public:
    Vehicle(string mk, string md, int sp):make(mk),model(md),speed(sp){}
    virtual void accelerate()=0;
    virtual void brake()=0;
    virtual void calculateFuelEfficiency()=0;

    string getMake(){return make;}
    string getModel(){return model;}
    int getSpeed(){return speed;}
};

class Car:public Vehicle{
    double fuelcapacity;
    public:
    Car(string mk, string md, int sp, double fc):Vehicle(mk,md,sp),fuelcapacity(fc) {}
    void accelerate()
    {
        this->speed+=10;
    }
    void brake()
    {
        try{
            if (this->speed==0)
            {
                throw("Car is not moving. Cannot apply brakes.\n");
            }
            else{
                this->speed-=10;
            }
        }
        catch(const char* msg){
            cout <<"Error braking. "<<msg;
        }
    }
    void calculateFuelEfficiency()
    {
        // Using sample formula
        cout<<"The car's fuel efficiency is " <<60/fuelcapacity<<"miles per gallon."<<endl;
    }
};

class Truck:public Vehicle{
    int cargocapacity;
    public:
    Truck(string mk, string md, int sp, int cc):Vehicle(mk,md,sp),cargocapacity(cc) {}
    void accelerate()
    {
        this->speed+=10;
    }
    void brake()
    {
        try{
            if (this->speed==0)
            {
                throw("Truck is not moving. Cannot apply brakes.\n");
            }
            else{
                this->speed-=10;
            }
        }
        catch(const char* msg){
            cout <<"Error braking. "<<msg;
        }
    }
    void calculateFuelEfficiency()
    {
        // Using sample formula
        cout<<"The truck's fuel efficiency information does not exist, instead it's cargo capacity information exists.\nIts cargo capacity is: "<<cargocapacity<<endl;
    }
};
int main() {

    return 0;
}
