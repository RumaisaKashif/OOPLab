#include <iostream>

using namespace std;

class Perimeter{
    double length,width;
    friend class printClass;
    public:
    Perimeter(double l, double w):length(l), width(w){}
};
class printClass{
    public:
    void displayPerimeter(Perimeter &p)
    {
        int perimeter=2*(p.length+p.width);
        cout<<"Perimeter: "<<perimeter<<endl;
    }
};
int main() {
    Perimeter p(10,10);
    printClass pc;
    pc.displayPerimeter(p);
    return 0;
}
