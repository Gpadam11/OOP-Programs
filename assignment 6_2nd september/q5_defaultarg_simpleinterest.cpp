//  WAP to calculate simple interest of given principal amount. (take rate of interest as default argument) 

#include <iostream>
using namespace std;
double simple_interest(float p, float t, float r=2)
{
    double si;
    si=(p*t*r)/100;
    return si;
}
int main()
{
 
    double p, t, r, si;
    cout<<"\nEnter principal amount: ";
    cin>>p;
    cout<<"\nEnter time: ";
    cin>>t;
   // float simple_interest(float p, float t, float r=2);
    si = simple_interest(p, t);
    cout<<"\nSimple interest: "<<si<<endl;
    /*cout<<"\nEnter rate of interest: ";
    cin>>r;
    si = simple_interest(p, t, r);
    cout<<"\nSimple interest: "<<si;*/
    return 0;

}
