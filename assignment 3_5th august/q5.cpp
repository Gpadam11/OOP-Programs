#include <iostream>
using namespace std;

class Employee
{
public:
  char name[20];
  int id, age, basicsalary;
  double grosssalary;
  void input();
  void display();
};

void Employee::input()
{

  cout << "Enter the name of the employee: \n";
  cin >> name;
  cout << "id:\n";
  cin >> id;
  cout << "Enter the age: \n";
  cin >> age;
  cout << "Enter basic salary\n";
  cin >> basicsalary;
  grosssalary = basicsalary + 0.8 * basicsalary + 0.1 * basicsalary;
}

void Employee::display()
{
  cout << "Name of the employee:" << name << endl
       << "Id:\t\t" << id << endl
       << "Age:\t\t" << age << endl
       << "Basic salary:\t" << basicsalary << endl
       << "Gross salary:\t" << grosssalary << endl;
}

int main()
{
  int i, n;
  cout << " Enter no. of employees";
  cin >> n;
  Employee emp[n];

  for (i = 0; i < n; i++)
  {
    cout << "Enter the details of employee " << i + 1 << endl;
    emp[i].input();
    cout << "Employee " << i + 1 << " details are:\n";
    emp[i].display();
  }
  return 0;
}
