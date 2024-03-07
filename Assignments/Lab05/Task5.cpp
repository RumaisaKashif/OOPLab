#include <iostream>

using namespace std;
class Wheels{
    int number;
    string type;
    public:
    Wheels(int n,string  t): number(n), type(t){}
    void setNum(int n)
    {
        number=n;
    }
    int getNum()
    {
        return number;
    }
    void setType(string t)
    {
        type=t;
    }
    string getType()
    {
        return type;
    }
};

class Steering{
    string brand;
    public:
    Steering(string b):brand(b){}
    void setBrand(string b)
    {
        brand=b;
    }
    string getBrand()
    {
        return brand;
    }
};

class Headlights{
    int number;
    string brand;
    string color;
    public:
    Headlights(int n, string b, string c): number(n),brand(b),color(c){}
    void setNum(int n)
    {
        number=n;
    }
    int getNum()
    {
        return number;
    }
    void setBrand(string b)
    {
        brand=b;
    }
    string getBrand()
    {
        return brand;
    }
    void setColor(string c)
    {
        color=c;
    }
    string getColor()
    {
        return color;
    }
};

class Engine{
    string type;
    int horsepower;
    public:
    Engine(string t, int hp): type(t), horsepower(hp){}
    void setType(string t)
    {
        type=t;
    }
    string getType()
    {
        return type;
    }
    void setHP(int h)
    {
        horsepower=h;
    }
    int getHP()
    {
        return horsepower;
    }
};

class Car{
    Engine* engine;
    Headlights* headlights;
    Wheels wheels;
    Steering steering;
    public:
    Car(Engine* myEngine, const Wheels& myWheels, Headlights* myHeadlights, const Steering& mySteering) : 
        engine(myEngine), wheels(myWheels), headlights(myHeadlights), steering(mySteering) {}

    ~Car() 
    {
        delete engine;
        delete headlights;
    }

    void displayInfo()
    {
        cout<<"---------------------------"<<endl;
        cout<<"Engine information:"<<endl;
        cout<<"Type:\t"<<engine->getType()<<endl;
        cout<<"Horsepower:\t"<<engine->getHP()<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"Wheels information:"<<endl;
        cout<<"Number:\t"<<wheels.getNum()<<endl;
        cout<<"Type:\t"<<wheels.getType()<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"Headlights information:"<<endl;
        cout<<"Number:\t"<<headlights->getNum()<<endl;
        cout<<"Brand:\t"<<headlights->getBrand()<<endl;
        cout<<"Color:\t"<<headlights->getColor()<<endl;
        cout<<"---------------------------"<<endl;
        cout<<"Steering information:"<<endl;
        cout<<"Type:\t"<<steering.getBrand()<<endl;
    };
};
int main()
{
    cout<<"Rumaisa Kashif, 23K-0744, Q5"<<endl;
    Wheels myWheels(4,"Alloy");
    Headlights* myHeadlights= new Headlights(2, "RnB", "Warm");
    Steering mySteering("Toyota");
    Engine* myEngine= new Engine("V8", 300);
    
    Car myCar(myEngine, myWheels, myHeadlights, mySteering);
    myCar.displayInfo();
    return 0;
}
