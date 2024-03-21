#include <iostream>
using namespace std;

class Course 
{
    string ccode, cname;
    int credhrs;
public:
    Course() {}
    Course(string c, string n, int h) : ccode(c), cname(n), credhrs(h) {}
    string getName() 
    { 
        return cname; 
    }
    string getCode() 
    { 
        return ccode; 
    }
    int getHrs() 
    { 
        return credhrs; 
    }
    void display() 
    {
        cout<<"Course name: "<<cname<<endl;
        cout<<"Course code: "<<ccode<<endl;
        cout<<"Credit hours: "<<credhrs<<endl;
    }
};

class Student 
{
    string sid, name;
    Course courses[10]; 
    int courseCount;    
public:
    Student(string s, string n): sid(s), name(n), courseCount(0) {}
    void enrol(Course obj) 
    {
        if (courseCount<10) 
        {
            courses[courseCount++]=obj;
            cout<<"Enrolled in the course successfully."<<endl;
        } 
        else 
        {
            cout<<"Can't enroll in more courses. Course limit reached."<<endl;
        }
    }

    void drop(Course obj) 
    {
        for (int i = 0; i < courseCount; i++) 
        {
            if (courses[i].getName()==obj.getName()) 
            {
                for (int j=i; j<courseCount-1; j++) 
                {
                    courses[j]=courses[j + 1];
                }
                courseCount--;
                cout<<"Dropped from the course successfully." << endl;
                return;
            }
        }
        cout<<"Course doesn't exist."<<endl;
    }

    int getCredHours() 
    {
        int sum= 0;
        for (int i=0; i<courseCount; i++) 
        {
            sum+=courses[i].getHrs();
        }
        return sum;
    }

    void printEnrolledCourses() 
    {
        for (int i=0; i<courseCount; i++) 
        {
            courses[i].display();
        }
    }
};

int main() 
{
    cout<<"Rumaisa Kashif, BS AI 2A, 23K0744"<<endl;
    Course courses[]={Course("1", "Phy", 3),
    Course("2", "Chem", 3),
    Course("3", "Bio", 2)};

    Student s("123", "Rumaisa Kashif");
    for (int i=0; i<sizeof(courses)/sizeof(courses[0]); i++) 
    {
        s.enrol(courses[i]);
    }
    cout<<"\nEnrolled courses:"<<endl;
    s.printEnrolledCourses();
    cout<<"\nTotal cred hours: "<<s.getCredHours()<<endl;

    s.drop(courses[0]);
    cout<<"\nAfter dropping Phy:"<<endl;
    s.printEnrolledCourses();

    return 0;
}
