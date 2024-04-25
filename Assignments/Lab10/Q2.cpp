#include <iostream>
using namespace std;

class Number 
{
private:
    int value;
public:
    Number(int val): value(val) {}
    Number operator--() 
    {
        Number temp=*this;
        value=value*4;
        return temp;
    }
    Number operator--(int) 
    {
        Number temp=*this;
        value=value/4;
        return temp;
    }
    void display() 
    {
        cout<<"Number: "<< value<<endl;
    }
};

int main() 
{
    Number num(20);
    cout<<"Using decrement prefix... "<<endl;
    --num;
    num.display();
    cout<<"Using decrement postfix on altered number... "<<endl;
    num--;
    num.display();
    Number num2(32);
    cout<<"Using decrement postfix on a new number... "<<endl;
    num2--;
    num2.display();
    return 0;
}
