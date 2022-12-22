#include<iostream>
using namespace std;


class student
{
    public:
     string name;
    int roll;
    int age;
    void getdata()
    {
        cout<<"Enter the name of the student"<<endl;
        getline(cin,name);
        cout<<"Enter the roll number of the student"<<endl;
        cin>>roll;
        cout<<"Enter the age of the student"<<endl;
        cin>>age;
    }
      void display()
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

class result: public test
{
    int totalmarks;
    double percentage;
    public:
    void getresult()
    {

        totalmarks=m1+m2+m3+m4+m5;
        percentage=totalmarks/5;
    }
    void displayresult()
    {
        cout<<"The total marks of the student is "<<totalmarks<<endl;
        cout<<"The percentage of the student is "<<percentage<<endl;
    }
};

int main()
{
    result ob;
    ob.getdata();
    ob.getmarks();
    ob.getresult();
    ob.display();
    ob.displaymarks();
    ob.displayresult();
    return 0;
}