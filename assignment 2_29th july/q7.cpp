//Q7 WAP to convert given second into its equivalent hour, min and sec.

#include <iostream>
using namespace std;
int main()
{
    int sec, min, hour;
    cout<<"Enter time in seconds ";
    cin>>sec;
    hour=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    cout<<"Converted time: "<<endl;
    cout<<"hour="<<hour<<endl;
    cout<<"minutes="<<min<<endl;
    cout<<"seconds="<<sec<<endl;
    return 0;
}
