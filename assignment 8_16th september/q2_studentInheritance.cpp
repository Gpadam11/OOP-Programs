#include <iostream>
using namespace std;

class student
{
    string name;
    int roll;
    int age;
    public:
    void getdata()
    {
        cout<<"Enter the name of the student"<<endl;
        getline(cin,name);
        cout<<"Enter the roll number of the student"<<endl;
        cin>>roll;
        cout<<"Enter the age of the student"<<endl;
        cin>>age;
    }
    void displaydetails()
    {
        cout<<"The name of the student is "<<name<<endl;
        cout<<"The roll number of the student is "<<roll<<endl;
        cout<<"The age of the student is "<<age<<endl;
    }
};

class test : public student
{
    int m1,m2,m3,m4,m5;
    public:
    void getmarks()
    {
        cout<<"Enter the marks of the student in 5 subjects"<<endl;
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    void displaymarks()
    {
        cout<<"The marks of the student in 5 subjects are "<<m1<<", "<<m2<<", "<<m3<<","<<m4<<","<<m5<<endl;
    }
};

int main()
{
    test ob;
    ob.getdata();
    ob.getmarks();
    ob.displaydetails();
    ob.displaymarks();
    return 0;
}