#include <iostream>
/*
Please note that this question has been done using aggregation in this file and composition in another file
*/
using namespace std;

class Course{
    string ccode,cname;
    int creds;
    public:
    Course(){}
    Course(string a,string b,int cr):ccode(a),cname(b),creds(cr){}
    string getCode()
    {
        return ccode;
    }
    string getName()
    {
        return cname;
    }
    int getCred()
    {
        return creds;
    }
    void display()
    {
        cout<<"Course Code : "<<getCode()<<endl;
        cout<<"Course Name : "<<getName()<<endl;
        cout<<"Credits : "<<creds<<endl;
    }
};

class Student{
    string sid, name;
    Course* courses;
    int coursecount;
    public:
    Student(string id, string n):sid(id),name(n),courses(new Course[10]),coursecount(0) {}  
    ~Student()
    {
        delete [] courses;
    }
    void enrol(Course& obj) 
    {
        if (coursecount<10)
        {
            courses[coursecount++]=obj;
            cout<<"Enrolled in the course successfully."<<endl;
        }
        else
        {
            cout<<"Can't enroll in more courses. Course limit reached."<<endl;
            return;
        }
    }
    void drop(Course &obj)
    {
        if (coursecount>0)
        {
            for (int i=0;i<coursecount;i++)
            {
                if (courses[i].getName()==obj.getName())
                {
                    for (int j=i;j<coursecount;j++)
                    {
                        courses[j]=courses[j+1];
                    }
                    cout<<"Dropped from the course successfully." << endl;
                    coursecount--;
                    return;
                }
            }
        }
        else
        {
            cout<<"Course doesn't exist."<<endl;
        }
    }
    int getCredHours() 
    {
        int sum=0;
        for (int i=0; i<coursecount; i++) {
            sum+=courses[i].getCred();
        }
        return sum;
    }

    void printEnrolledCourses() 
    {
        for (int i=0; i<coursecount; i++) {
            courses[i].display();
        }
    }
};

int main() 
{
    cout<<"Rumaisa Kashif, BS AI 2A, 23K0744"<<endl;
    Course courses[] = {Course("1", "Phy", 3),
                        Course("2", "Chem", 3),
                        Course("3", "Bio", 2)};
    Student s("123", "Rumaisa Kashif");
    for (int i = 0; i < sizeof(courses) / sizeof(courses[0]); i++) {
        s.enrol(courses[i]);
    }

    cout << "\nEnrolled courses:" << endl;
    s.printEnrolledCourses();

    cout << "\nTotal cred hours: " << s.getCredHours() << endl;

    s.drop(courses[0]);
    cout << "\nAfter dropping Phy:\n";
    s.printEnrolledCourses();

    return 0;
}
