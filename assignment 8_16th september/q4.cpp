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
    
    public:
    int m1,m2,m3,m4,m5;
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

class sports
{
    
    public:
    int score;
    void getscore()
    {
        cout<<"Enter the score of the student in sports"<<endl;
        cin>>score;
    }
    void displayscore()
    {
        cout<<"The score of the student in sports is "<<score<<endl;
    }
};

class result: public test, public sports
{
    int totalmarks;
    double percentage;
    public:
    void getresult()
    {
        totalmarks=m1+m2+m3+m4+m5+score;
        percentage=totalmarks/6;
    }
    void displayresult()
    {
        cout<<"The total marks of the student is "<<totalmarks<<endl;
        cout<<"The percentage of the student is "<<percentage<<endl;
    }
};

int main()
{
    result r;
    r.getdata();
    r.getmarks();
    r.getscore();
    r.getresult();
    r.displaydetails();
    r.displaymarks();
    r.displayscore();
    r.displayresult();
    return 0;
}