//8.WAP to create a class distance having data members km, meter, cm. User enters the distance in centimeters. Convert the distance into km:meter:cm. [Basic to Class]

#include <iostream>
using namespace std;

class Distance
{
    int km,m, cm;
    public:
    Distance()
    {}
    Distance(int d)
    {
        cm=d;
        
    }
}