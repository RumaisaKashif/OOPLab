#include "iostream"

using namespace std;

class Character
{
    int health;
    int damage;
    public:
    Character(int h, int d)
    {
        health=h;
        damage=d;
    }
    void display()
    {
        cout<<"Health: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
};

class Enemy: public Character
{
    public:
    Enemy(int h, int d): Character(h,d) {}  
    void display()
    {
        Character::display();
    }
};

class Player: public Character
{
    public:
    Player(int h, int d): Character(h,d) {}  
    void display()
    {
        Character::display();
    }
};

class Wizard: public Player
{
    int magicpower;
    string spells;
    public:
    Wizard(int mp, string sp, int h, int d): magicpower(mp),spells(sp),Player(h,d) {}
    void display()
    {
        cout<<"Magic power: "<<magicpower<<endl;
        cout<<"Spells: "<<spells<<endl;
        Player:: display();
    }
};

int main()
{
    cout<<"Rumaisa Kashif\t23k0744\n"<<endl;
    Wizard HarryPotter(100,"Accio",50,20);
    HarryPotter.display();
}
