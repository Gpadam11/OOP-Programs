// Q4. WAP to calculate area of a triangle whose three sides are given.

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
     int a,b,c; 
    cout << "Enter the three sides of the triangle\n";
    cin>>a>>b>>c;
    double s, area;
    s=(a+b+c)/2; //calculating s
    area=sqrt(s*(s-a)*(s-b)*(s-c)); //calculating area
    cout<<"Area="<<area<<endl;
    return 0;
}