#include <iostream>

using namespace std;
class Employee{
    protected:
    int employeeid;
    string employeename;
    public:
    Employee(int id, string n):employeeid(id),employeename(n){}
    virtual double calculatePay() const{return 0.0;}
    virtual void displayDetails() const{cout<<"Employee ID: "<<employeeid<<"\nEmployee Name: "<<employeename<<endl;}
};
class FulltimeEmployee:public Employee{
    double monthlysalary;
    public:
    FulltimeEmployee(int id, string n,double m):Employee(id,n),monthlysalary(m){}
    double calculatePay() const{return monthlysalary;}
    void displayDetails() const{cout<<"Type: Full time\nEmployee ID: "<<employeeid<<"\nEmployee Name: "<<employeename<<"\nPay: "<<calculatePay()<<endl;}
};
class ParttimeEmployee:public Employee{
    int numhours;
    double hourlywage;
    public:
    ParttimeEmployee(int id, string n,double h, int num):Employee(id,n),numhours(num),hourlywage(h){}
    double calculatePay() const{
        return numhours*hourlywage;
    }
    void displayDetails() const{cout<<"Type: Part time\nEmployee ID: "<<employeeid<<"\nEmployee Name: "<<employeename<<"\nPay: "<<calculatePay()<<endl;}

};

int main() 
{
    Employee* e1;
    Employee* e2;
    FulltimeEmployee fe(101,"Sana Jamal", 30000.0);
    ParttimeEmployee pe(102,"Maryam", 30, 100.0);
    e1=&fe;
    e2=&pe;
    cout<<"Displaying details: "<<endl;
    fe.displayDetails();
    cout<<"-----------------------------------------"<<endl;
    pe.displayDetails();
    cout<<"-----------------------------------------"<<endl;
    cout<<"Calculating pay: "<<endl;
    cout<<"Full-time employee pay: "<<fe.calculatePay()<<endl;
    cout<<"Part-time employee pay: "<<pe.calculatePay()<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Using base class pointer to calculate Full-time employee pay: ";
    cout<<"$ "<<e1->calculatePay()<<endl;
    cout<<"-----------------------------------------"<<endl;
    return 0;
}
