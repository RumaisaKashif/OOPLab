#include <iostream>
#include <string>

using namespace std;

class Calendar{
    public:
    string January[31];
    string February[29];
    string March[31];
    string April[30];
    string May[31];
    string June[30];
    string July[31];
    string August[31];
    string September[30];
    string October[31];
    string November[30];
    string December[31];
    int year;
};

void addTask(int day, int month, string task, Calendar &calendar);
void deleteTask(int day, int month, Calendar &calendar);
void displayTasks(int month, Calendar calendar);

int main()
{
    Calendar calendar;
    cout<<"Welcome to the Calendar."<<endl;
    bool isTrue=true;
    while (isTrue)
    {
        cout<<"Choose an operation from the following:\n1. Add Task\n2. Delete Task\n3. Display Tasks\n4. Exit Calendar."<<endl;
        int option;
        cin>>option;
        cin.ignore();
        if (option==1)
        {
            string task;
            int day, month;
            cout<<"Enter the month and day (numeric) for which you wish to add the task."<<endl;
            cin>>month>>day;
            cin.ignore();
            cout<<"Enter the task description."<<endl;
            getline(cin,task);
            addTask(day, month, task, calendar);
        }
        else if (option==2)
        {
            int day, month;
            cout<<"Enter the month and day (numeric) for which you wish to delete the task."<<endl;
            cin>>month>>day;
            cin.ignore();
            deleteTask(day, month, calendar);
        }
        else if (option==3)
        {
            int month;
            cout<<"Enter the month (numeric) for which you wish to display the tasks."<<endl;
            cin>>month;
            displayTasks(month,calendar);
        }
        else if (option==4)
        {
            isTrue=false;
        }
    }
}

void addTask(int day, int month, string task, Calendar &calendar)
{
    if (month==1)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.January[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==2)
    {
        for (int i=0;i<29;i++)
        {
            if (day==i+1)
            {
                calendar.February[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==3)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.March[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==4)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.April[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==5)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.May[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==6)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.June[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==7)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.July[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==8)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.August[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==9)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.September[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==10)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.October[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==11)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.November[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
    else if (month==12)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.December[i]=task;
                cout<<"Task successfully added"<<endl;
                break;
            }
        }
    }
}

void deleteTask(int day, int month, Calendar &calendar)
{
    if (month==1)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.January[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==2)
    {
        for (int i=0;i<29;i++)
        {
            if (day==i+1)
            {
                calendar.February[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==3)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.March[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==4)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.April[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==5)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.May[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==6)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.June[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==7)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.July[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==8)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.August[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==9)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.September[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==10)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.October[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==11)
    {
        for (int i=0;i<30;i++)
        {
            if (day==i+1)
            {
                calendar.November[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
    else if (month==12)
    {
        for (int i=0;i<31;i++)
        {
            if (day==i+1)
            {
                calendar.December[i]="\0";
                cout<<"Task successfully deleted"<<endl;
                break;
            }
        }
    }
}

void displayTasks(int month, Calendar calendar)
{
    if (month==1)
    {
        for (int i=0;i<31;i++)
        {
            if (calendar.January[i]!="\0")
            {
                cout<<"Task for January "<<i+1<<" : "<<calendar.January[i]<<endl;
            }
        }
    }
    else if (month==2)
    {
        for (int i=0;i<29;i++)
        {
            if (calendar.February[i]!="\0")
            {
                cout<<"Task for February "<<i+1<<" : "<<calendar.February[i]<<endl;
            }
        }
    }
    else if (month==3)
    {
        for (int i=0;i<31;i++)
        {
            if (calendar.March[i]!="\0")
            {
                cout<<"Task for March "<<i+1<<" : "<<calendar.March[i]<<endl;
            }
        }
    }
    else if (month==4)
    {
        for (int i=0;i<30;i++)
        {
            if (calendar.April[i]!="\0")
            {
                cout<<"Task for April "<<i+1<<" : "<<calendar.April[i]<<endl;
            }
        }
    }
    else if (month==5)
    {
        for (int i=0;i<31;i++)
        {
            if (calendar.May[i]!="\0")
            {
                cout<<"Task for May "<<i+1<<" : "<<calendar.May[i]<<endl;
            }
        }
    }
    else if (month==6)
    {
        for (int i=0;i<30;i++)
        {
            if (calendar.June[i]!="\0")
            {
                cout<<"Task for June "<<i+1<<" : "<<calendar.June[i]<<endl;
            }
        }
    }
    else if (month==7)
    {
        for (int i=0;i<31;i++)
        {
            if (calendar.July[i]!="\0")
            {
                cout<<"Task for July "<<i+1<<" : "<<calendar.July[i]<<endl;
            }
        }
    }
    else if (month==8)
    {
        for (int i=0;i<31;i++)
        {
            if (calendar.August[i]!="\0")
            {
                cout<<"Task for August "<<i+1<<" : "<<calendar.August[i]<<endl;
            }
        }
    }
    else if (month==9)
    {
        for (int i=0;i<30;i++)
        {
            if (calendar.September[i]!="\0")
            {
                cout<<"Task for September "<<i+1<<" : "<<calendar.September[i]<<endl;
            }
        }
    }
    else if (month==10)
    {
        for (int i=0;i<31;i++)
        {
            if (calendar.October[i]!="\0")
            {
                cout<<"Task for October "<<i+1<<" : "<<calendar.October[i]<<endl;
            }
        }
    }
    else if (month==11)
    {
        for (int i=0;i<30;i++)
        {
            if (calendar.November[i]!="\0")
            {
                cout<<"Task for November "<<i+1<<" : "<<calendar.November[i]<<endl;
            }
        }
    }
    else if (month==12)
    {
        for (int i=0;i<31;i++)
        {
            if (calendar.December[i]!="\0")
            {
                cout<<"Task for December "<<i+1<<" : "<<calendar.December[i]<<endl;
            }
        }
    }
}
