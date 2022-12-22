//Q2 Write a prg to perform addition, subtraction and multiplication of two integers and display the result.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sum, subtract, multiply;
    int a,b;
    cout<<"Enter two integers";
    cin>>a>>b;
    sum=a+b;
    if(a>=b)
    subtract=a-b;
    else 
    subtract=b-a;
    multiply=a*b;
    cout<<"Addition="<<sum;
    cout<<"Subtraction="<<subtract;
    cout<<"Multiplication="<<multiply;
}