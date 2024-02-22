#include <iostream>
#include <string>
using namespace std;

class Weekdays{
    string Days[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int currentDay;
    public:
    // Weekdays(){
    // The question mentioned initialisation of days such as the one commented hereby, however, this will not be supported
    // in the presence of the parametricised constructor therefore I have initialised above.
    //     Days[0] = "Sunday";
    //     Days[1]= "Monday";
    //     Days[2]= "Tuesday";
    //     Days[3]= "Wednesday";
    //     Days[4]= "Thursday";
    //     Days[5]= "Friday";
    //     Days[6]= "Saturday";
    // }
    Weekdays(int current){
        if (current>6)
        {
            current=(7-current)*-1;
        }
        currentDay=current;
    }
    void getCurrentDay()
    {
        cout<<"The current day is "<<Days[currentDay]<<endl;
    }
    void getNextDay()
    {
        int nextDay= currentDay+1;
        if (nextDay>6)
        {
            nextDay= 0; // Wrap around to Sunday (index 0)
        }
        cout<<"The next day is "<<Days[nextDay]<<endl;
    }
    void getPreviousDay()
    {
        int prevDay=currentDay-1;
        if (currentDay==0)
        {
            prevDay=6;
        }
        cout<<"The previous day is "<<Days[prevDay]<<endl;
    }
    void getNthDayFromToday(int n)
    {
        int daysAway=n; 
        int totalDays=daysAway+currentDay;
        if (totalDays > 6)
        {
            totalDays=totalDays%7;
        }
        cout<<"The "<<n<<"th/rd day from today is "<<Days[totalDays]<<endl;
        
    }
};

int main()
{
    Weekdays weekdays(6);
    weekdays.getCurrentDay();
    weekdays.getNextDay();
    weekdays.getPreviousDay();
    weekdays.getNthDayFromToday(3);
}
