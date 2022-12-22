//WAP to demonstrate the order of execution of order of execution of constructors and destructors of a class.

#include <iostream>
using namespace std;
class Student
{
public:
int x,y;
Student()
{
    cout<<"Constructor Invoked 1"<<endl;
}
Student(int a)
{
    x=a;
    cout<<"Constructor Invoked 2"<<endl;
}

Student(int a, int b)
{
    x=a;
    y=b;
    cout<<"Constructor Invoked 3 "<<x<<y<<endl;
}
~Student() // destuctor oreder is reverse of constructor
{
    cout<<" Destructor Invoked "<<endl;
}
};

int main(void)
{
    
Student s1; //creating object of class student
Student s2(10); //creating object of class student
Student s3(10,20); //creating object of class student


return 0;
}