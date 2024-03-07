#include <iostream>

using namespace std;

class Square {
    float sidelength;
    float area;
    static float allareas;
public:
    Square() {}
    Square(float sideLength) : sidelength(sideLength) {}
    void calcArea() 
    {
        area= sidelength * sidelength; 
        Square::allareas += area;
    }
    void setSide(float s) 
    { 
        sidelength = s;
    }
    void setArea(float a) 
    { 
        area = a;
    }
    float getSide() 
    {
        return sidelength;
    }
    float getArea() 
    {
        return area;
    }
    static float getAllareas()
    {
        return allareas;
    }
};

float Square::allareas = 0;

int main() 
{
    cout<<"Rumaisa Kashif, 23K-0744, Q5"<<endl;
    Square s1(4);
    s1.calcArea();
    cout << "Area of s1: " << s1.getArea() << endl;
    Square s2(5);
    s2.calcArea();
    cout << "Area of s2: " << s2.getArea() << endl;
    Square s3(3);
    s3.calcArea();
    cout << "Area of s3: " << s3.getArea() << endl;
    cout << "All areas: " << Square::getAllareas() << endl;
    return 0;
}
