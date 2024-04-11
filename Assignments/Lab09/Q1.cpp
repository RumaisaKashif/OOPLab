#include <iostream>
using namespace std;

// Declaration of global constant
const float PI = 3.14159;

class Shape 
{
    // Declared private to achieve encapsulation
    float area;
    float perimeter;
public:
    // All area functions have the same name
    void calcArea(double r) 
    {
        area= PI*r*r;// Using global constant 
    }
    void calcArea(int l, int b) 
    {
        area= (float)(l*b);
    }
    void calcArea(double h, double b) 
    {
        area= (float)(h*b*0.5);
    }
    // All perimeter functions have the same name
    void calcPerimeter(double r) 
    {
        perimeter= 2*PI*r;
    }
    void calcPerimeter(int l, int b) 
    {
        perimeter= (float)(2*l)+(2*b);
    }
    void calcPerimeter(double h, double b, double w) 
    {
        perimeter = (float)(h+b+w);
    }
    float getArea() {return area;}
    float getPerimeter() {return perimeter;}
};

int main() 
{
    Shape circle;
    Shape rectangle;
    Shape triangle;

    // Calling functions to set values
    circle.calcArea(7.0);
    rectangle.calcArea(4, 6);
    triangle.calcArea(2.0, 4.0);
    circle.calcPerimeter(7.0);
    rectangle.calcPerimeter(4, 6);
    triangle.calcPerimeter(1, 1, 3);

    // Displaying areas and perimeters
    cout << "Circle Area: " << circle.getArea() << endl;
    cout << "Rectangle Area: " << rectangle.getArea() << endl;
    cout << "Triangle Area: " << triangle.getArea() << endl;
    cout << "Circle Perimeter: " << circle.getPerimeter() << endl;
    cout << "Rectangle Perimeter: " << rectangle.getPerimeter() << endl;
    cout << "Triangle Perimeter: " << triangle.getPerimeter() << endl;
    return 0;
}
