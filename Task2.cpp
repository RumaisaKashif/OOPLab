#include <iostream>

using namespace std;

class WaterBottle{
    string company;
    string color;
    double capacityinl;
    double capacityinml;
    public:
    void setCompany(string c)
    {
        company=c;
    }
    void setColor(string cl)
    {
        color=cl;
    }
    void setCapacityinl(double ml)
    {
        double l=ml/1000;
        capacityinl=l;
    }
    void setCapacityinml(double ml)
    {
        capacityinml=ml;
    }
    string getCompany()
    {
        return company;
    }
    string getColor()
    {
        return color;
    }
    double getCapacityinl()
    {
        return capacityinl;
    }
    double getCapacityinmml()
    {
        return capacityinml;
    }

};

int main()
{
    WaterBottle w;
    cout<<"For the water bottle enter the following:"<<endl;
    cout<<"Enter FIRST WORD in company name: "<<endl;
    string company;
    cin>>company;
    w.setCompany(company);
    cout<<"Enter color of bottle: "<<endl;
    string color;
    cin>>color;
    w.setColor(color);
    cout<<"Enter Capacity in mililiters: "<<endl;
    double capmil;
    cin>>capmil;
    w.setCapacityinl(capmil);
    w.setCapacityinml(capmil);
    cout<<"\n\nThe details are as follows:\n";
    cout<<"The company of the bottle is:"<<w.getCompany()<<endl;
    cout<<"The color of the bottle is: "<<w.getColor()<<endl;
    cout<<"The capacity of the bottle in l is: "<<w.getCapacityinl()<<endl;
    cout<<"The capacity of the bottle in ml is: "<<w.getCapacityinmml()<<endl;
}
