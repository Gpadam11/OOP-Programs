// Create a class which stores employee name, id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour. Calculate the salary of a regular employee and a par-time employee, using virtual function.

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string id;
    int bs;
    virtual void calc() = 0;
};

class Regular : public Employee
{
public:
    double da, hra;
    void calc()
    {
        cout << "Enter Basic Salary: ";
        cin >> bs;
        da = 0.2 * bs;
        hra = 0.1 * bs;
        double sal = da + hra + bs;
        cout << "Salary is " << sal << endl;
    }
};

class Part_time
{
public:
    int nh, ph;
    void calc()
    {
        cout << "Enter no of hours and pay per hour: ";
        cin >> nh >> ph;
        int sal = nh * ph;
        cout << "Salary is " << sal << endl;
    }
};

int main()
{
    Regular ob1;
    ob1.calc();
    Part_time ob2;
    ob2.calc();
  return 0;
}