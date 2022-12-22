#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks[5], total;
    double perc;
    void getdata();
    void display();
};
void Student::getdata()
{
    total = 0;
    cout << "Enter name of the student";
    getline(cin, name);
    cout << "Enter roll no. of the student";
    cin >> roll;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of the student in subject " << i + 1 << endl;
        cin >> marks[i];
        total = total + marks[i];
    }
    perc = total / 5;
}
void Student::display()
{
    cout << "Name of the student: " << name << endl
         << "Roll no: " << roll << endl
         << "Total Marks: " << total << endl
         << "Percentage: " << perc << endl;
}
int main()
{
    Student s;
    s.getdata();
    s.display();
    return 0;
}
