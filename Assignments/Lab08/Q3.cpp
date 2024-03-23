#include <iostream>

using namespace std;
class Position
{
    int x,y,z;
    public:
    Position(int X, int Y, int Z): x(X), y(Y), z(Z){}
    void display()
    {
        cout<<"Position: "<<x<<", "<<y<<", "<<z<<endl;
    }
};


class Health
{
    string health;
    public:
    Health(string h): health(h){}
    void display()
    {
        cout<<"Health: "<<health<<endl;
    }
};

class Character: public Position, public Health
{
    string name;
    int power;
public:
    Character(string n, int p, int X, int Y, int Z, string h):name(n),power(p),Position(X,Y,Z),Health(h){}
    void display(){
        cout<< "Name: "<<name<<endl;
        cout<< "Power: " <<power<<endl;
        Position::display();
        Health::display();
    }
};

int main()
{
    cout<<"Rumaisa Kashif\t23k0744\n"<<endl;
    Character charac("Aloo", 100,1,2,3,"good");
    charac.display();
}
