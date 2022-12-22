//WAP to create a class distance having data members km, meter, cm. User enters the distance in centimeters. Convert the distance into km:meter:cm. [Class to Class]

#include <iostream>
using namespace std;

class Distance
{
    int km,m, cm;
    public:
    Distance()
    {}
    Distance(int c)
    {
        cm=c;
    }
    int getdistance()
    {
        int d;
        //converting cm to km:meter:cm
        km=cm/100000;
        m=(cm%100000)/100;
        cm=cm%100;

    }
   

};
class Distance1 
{
    int km, m, cm;
    public:
    Distance1()
    {}
    void operator =(Distance k, Distance m, Distance c)
    {
        
    }
    void show()
    {
        cout<<"The distance is: "<<km<<" km "<<m<<" m "<<cm<<" cm";
    }
};
