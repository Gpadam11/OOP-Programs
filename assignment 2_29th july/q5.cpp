//Q5 WAP to find avg marks of 5 subs of a student and find the percentage assuming full marks of each subject is 100.

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter marks of 5 subjects";
    cin>>a>>b>>c>>d>>e;
    int total;
    double avg, percent;
    total=a+b+c+d+e;
    avg= total/5;
    percent= total/500*100;
    cout<<"Average="<<avg<<endl;
    cout<<"Percentage="<<avg<<endl;
    return 0;
}
