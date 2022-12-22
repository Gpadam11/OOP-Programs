#include <iostream>
using namespace std;
class  Employee
{
    public:
    char name[50];
    int id;
    void getdata()
    {
        cout<<"Enter the name of the employee"<<endl;
        cin>>name;
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
    }
    void displaydata()
    {
        cout<<"The name of the employee is "<<name<<endl;
        cout<<"The id of the employee is "<<id<<endl;
    }
};
class Regular: public Employee 
{
    public:
    double hra, da, basicsalary, newsalary;
    void regularsalary()
    {
        
        cout<<"Enter the basic salary of the employee"<<endl;
        cin>>basicsalary;
        da=0.80*basicsalary;
        hra=0.20*basicsalary;
        newsalary=basicsalary+hra+da;
    }
    void displayRegSalary()
    {
        cout<<"The basic salary of the employee is "<<basicsalary<<endl;
        cout<<"The total salary of a regular employee is "<<newsalary<<endl;
    }    
};
class Parttime: public Employee
{
    public:
    int hours;
    int pay;
    int newsalary;
    void parttimesalary()
    {
        cout<<"Enter the number of hours the employee has worked"<<endl;
        cin>>hours;
        cout<<"Enter the pay per hour of the employee"<<endl;
        cin>>pay;
        newsalary=hours*pay;
    }
    void displayPartSalary()
    {
        cout<<"The salary of the part time employee is "<<newsalary<<endl;
    }
};

int main()
{
    Regular ob1;
    cout<<"Enter the details of a regular employee"<<endl;
    ob1.getdata();
    ob1.regularsalary();
    ob1.displaydata();
    ob1.displayRegSalary();

    Parttime ob2;
    cout<<"\nEnter the details of the part time employee"<<endl;
    ob2.getdata();
    ob2.parttimesalary();
    ob2.displaydata();
    ob2.displayPartSalary();
    return 0;
}