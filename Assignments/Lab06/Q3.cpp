#include <iostream>
using namespace std;

class Appointment {
    int avgcost;
    static int totalappoint;
    static double earnings;
public:
    Appointment(int a): avgcost(a) {
        totalappoint+= 1;
        earnings+= avgcost;
    }
    void setAvgCost(int a) 
    {
        avgcost = a;
    }
    int getAvgCost() 
    {
        return avgcost;
    }
    static double getTotalAvg() 
    {
        double avg=earnings/totalappoint;
        return avg;
    }
};

int Appointment::totalappoint = 0;
double Appointment::earnings = 0;

int main() {
    cout<<"Rumaisa Kashif, BS AI 2A, 23K0744"<<endl;
    Appointment ap[] = 
    {
        Appointment(100), 
        Appointment(200), 
        Appointment(300)  
    };

    cout<<"Total avg cost of all appointments made: "<<Appointment::getTotalAvg()<<endl;
}
