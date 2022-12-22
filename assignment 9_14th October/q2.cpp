#include<iostream>
using namespace std;
class Student
{
    public:
    char name[20];
    int roll_no;
    char branch[10];
    void input()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Roll no.:";
        cin>>roll_no;
        cout<<"Branch:";
        cin>>branch;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no."<<roll_no<<endl;
        cout<<"Branch:"<<branch<<endl;
    }
};
class InternalExam:public Student
{
    public:
    int internal_marks[5];
    void data_i()
    {
        cout<<"Enter interal marks in 5 subjects:(out of 30)";
        for(int i=0;i<5;i++)
        {
            cin>>internal_marks[i];
        }
    }

};
class MidSemesterExam:public Student
{
    public:
    int midsem_marks[5];
    void data_m()
    {
        cout<<"Enter midsem marks in 5 subjects(out of 20):";
        for(int i=0;i<5;i++)
        {
            cin>>midsem_marks[i];
        }
    }

};
class EndSemesterExam:public Student
{
    public:
    int endsem_marks[5];
    void data_e()
    {
        cout<<"Enter End sem marks in 5 subjects(out of 50):";
        for(int i=0;i<5;i++)
        {
            cin>>endsem_marks[i];
        }
    }

};
class Result:public InternalExam,public MidSemesterExam,public EndSemesterExam
{
    public:
    int total=0;
    double per;
    void print()
    {
    
        for(int i=0;i<5;i++)
        {
            total=total+internal_marks[i]+midsem_marks[i]+endsem_marks[i];
        }
        per=total/5;
        cout<<"Total marks:"<<total<<endl;
        cout<<"Percentage:"<<per;
    } 
    

};
int main()
{
    Result obj;
    Student ob;
    ob.input();
    obj.data_i();
    obj.data_m();
    obj.data_e();
    ob.display();
    obj.print();
}
