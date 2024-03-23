#include <iostream>

using namespace std;

class Person
{
    public:
    string name;
    int age;
    public:
    Person(string n,int a): name(n),age(a){}
    void display()
    { 
        cout<<"Name: "<<name<<"\tAge: "<<age<<endl;
    }
};

class Student: public Person
{
    protected:
    string studentid;
    int grade;
    public:
    Student(string sid, int g, string n, int a): studentid(sid), grade(g), Person(n,a){}
    void display()
    {
        cout<<"Student ID : "<<studentid<<endl;
        cout<<"Grade level: "<<grade<<endl;
        Person::display();
    }

};

class Teacher: public Person
{
    protected:
    string subject;
    string roomnum;
    public:
    Teacher(string s, string r, string n, int a): subject(s),roomnum(r), Person(n,a){}
    void display()
    {
        cout<<"Subject: "<<subject<<endl;
        cout<<"Room number: "<<roomnum<<endl;
        Person::display();
    }
};

class GraduateStudent: public Student, public Teacher
{
    public:
    GraduateStudent(string s, string r, string n, int a, string sid, int g): Teacher(s,r,n,a), Student(sid,g,n,a){}
    void display()
    {
        cout<<"Student ID: "<<studentid<<endl;
        cout<<"Grade: "<<grade<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Room number: "<<roomnum<<endl;
        cout<<"Name: "<<Student::name<<endl;
        cout<<"Age: "<<Student::age<<endl;
    }
};

int main()
{
    cout<<"Rumaisa Kashif\t23k0744\n"<<endl;
    GraduateStudent grad("OOP", "C16","Tim Cook",34,"1234",4);
    grad.display();
}
