#include <iostream>
#include<string>
using namespace std;
 
 class Student
 {
 public:
  string name;
  int roll, marks;
};   
 int main()
 {
  Student s;
  cout<<"Enter name of the student";
  getline(cin, s.name);
  cout<<"Enter roll no. of the student";
  cin>>s.roll;
  cout<<"Enter total marks of the student";
  cin>>s.marks;
  cout<<"Name of the student: "<<s.name<<endl<<"Roll no: "<<s.roll<< endl<<"Total Marks: "<<s.marks<<endl;
 }
