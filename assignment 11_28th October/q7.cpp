// WAP to create a class Time. Convert time (hh:mm:ss) into seconds (integer value). [Class to Basic]

#include <iostream>
using namespace std;

class Time
{
    int s, h, m;
    public:
    Time()
    {
        h=2;
        m=30;
        s=200;
    }
    operator int()
    {
        int sec;
        sec=h*3600+m*60+s;
        return (sec); 
    }
};

int main()
{
    Time t;
    int sec;
    sec=t;
    cout<<"Time in seconds is: "<<sec;
    return 0;
}