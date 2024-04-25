#include <iostream>

using namespace std;

class Shape 
{
    double area;
public:
    void setArea(double a) { area = a; }
    double getArea() const { return area; }
    friend Shape operator+(const Shape& shape1, const Shape& shape2);
};

Shape operator+(const Shape& shape1, const Shape& shape2) 
{
    Shape temp;
    temp.setArea(shape1.getArea()+shape2.getArea());
    return temp;
}

int main() {
    Shape shape1, shape2;
    shape1.setArea(15.0);
    shape2.setArea(20.0); 
    Shape ans= shape1+shape2; 
    cout<< "Total area (Shape 1+Shape 2): "<<ans.getArea()<<endl; 
    return 0;
}
