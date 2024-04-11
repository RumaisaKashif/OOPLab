#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const float PI = 3.14159;

class Shape 
{
public:
    virtual double area() const {}
    virtual double perimeter() const {}
    virtual void displayProperties() const {}
};

class Circle : public Shape 
{
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const  
    {
        return PI*radius*radius;
    }
    double perimeter() const 
    {
        return PI*radius*2;
    }
    void displayProperties() const 
    {
        cout<< "Circle Properties..." << endl
            << "Radius: " << radius << endl
            << "Area: " << area() << endl
            << "Perimeter: " << perimeter() << endl;
    }
};

class Triangle : public Shape 
{
protected:
    double base, side1, side2;
    double height;
public:
    Triangle(double s1, double s2, double s3, double h) : base(s1), side1(s2), side2(s3),height(h) {}
    double area() const 
    {
        return 0.5*height*base;
    }
    double perimeter() const 
    {
        return side1+side2+base;
    }

    void displayProperties() const 
    {
        cout << "Triangle Properties..." << endl
        << "Side 1: " << side1 << endl
        << "Side 2: " << side2 << endl
        << "Base: " << base << endl
        << "Height: " << height << endl
        << "Area: " << area() << endl
        << "Perimeter: " << perimeter() << endl;
    }
};

class Rectangle : public Shape 
{
private:
    double width,length;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const 
    {
        return length*width;
    }

    double perimeter() const
    {
        return(length + width)*2;
    }
    
    void displayProperties() const
    {
        cout << "Rectangle Properties..." << endl
        << "Width: " << width << endl
        << "Length: " << length << endl
        << "Area: " << area() << endl
        << "Perimeter: " << perimeter() << endl;
    }
};

class Square : public Shape 
{
    double side;
public:
    Square(double s) : side(s) {}
    double area() const 
    {
        return side*side;
    }

    double perimeter() const
    {
        return  4*(side);
    }

    void displayProperties() const 
    {
        cout << "Square Properties..." << endl
        << "Side length: " << side << endl
        << "Area: " << area() << endl
        << "Perimeter: " << perimeter() << endl;
    }
};

class EquilateralTriangle : public Triangle 
{
public:
    EquilateralTriangle(double side, double height) : Triangle(side, side, side, height) {}

    double area() const 
    {
        double temp=perimeter();
        double s=temp/2;
        return sqrt(s*(s-side1)*(s-side2)*(s-base));
    }

    void displayProperties() const 
    {
        cout << "Equilateral Triangle Properties..." << endl
        << "Side length: " << side1 << endl
        << "Area: " << area() << endl
        << "Perimeter: " << perimeter() << endl;
    }
};

int main() 
{
    cout<<"Welcome to the Geometry Competition Calculator!"<<endl;
    int choice;
    double a, b, c, d;
while(1){
    cout << "Select a shape:" << endl
    << "1. Circle" << endl
    << "2. Rectangle" << endl
    << "3. Square" << endl
    << "4. Equilateral Triangle" << endl
    << "5. Triangle" << endl
    << "Enter your choice: ";
    cin >> choice;

    Shape* sptr = nullptr;

    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> a;
            sptr = new Circle(a);
            break;
        case 2:
            cout << "Enter the length of a side 1 of a rectangle: ";
            cin >> a;
            cout << "Enter the length of side 2 of a rectangle: ";
            cin >> b;
            sptr = new Rectangle(a, b);
            break;
        case 3:
            cout << "Enter the length of a side of a square: ";
            cin >> a;
            sptr = new Square(a);
            break;
        case 4:
            cout << "Enter the length of a side of an equilateral triangle: ";
            cin >> a;
            cout << "Enter the height of an equilateral triangle: ";
            cin >> b;
            sptr = new EquilateralTriangle(a,b);
            break;
        case 5:
            cout << "Enter the length of base of a triangle: ";
            cin >> a;
            cout << "Enter the length of side 2 of a triangle: ";
            cin >> b;
            cout << "Enter the length of side 3 of a triangle: ";
            cin >> c;
            cout << "Enter the length of height of a triangle: ";
            cin >> d;
            sptr = new Triangle(a,b,c,d);
            break;
        default:
            cout << "Please make a valid choice." << endl;
            return 0;
    }
    sptr->displayProperties();
    delete sptr;
    cin.ignore();
    string opt;
    cout<<"Do you want to calculate properties for another shape? (yes/no)"<<endl;
    getline(cin,opt);
    if (opt=="yes")
    {

    }
    else if (opt=="no"){
        cout<<"Thank you for using the Geometry Competition Calculator!"<<endl;
        exit(1);
    }
}
    return 0;
}
