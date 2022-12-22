// Create a class which stores times in hh:mm:ss format. Include all the constructors. The parameterized constructor should initialize the minute value to zero, if its not provided.

#include <iostream>
using namespace std;
class times
{
private:
    int hh;
    int mm;

public:
    times() // default constructor
    {
        hh = 0;
        mm = 0;
    }
    times(int h, int m) // parameterized constructor
    {
        hh = h;
        mm = m;
    }
    times(int h) // parameterized constructor
    {
        hh = h;
        mm = 0;
    }
    times(times &obj) // copy constructor
    {
        hh = obj.hh;
        mm = obj.mm;
    }
    void display()
    {
        cout << "The times is " << hh << ":" << mm << endl
             << endl;
    }
};

int main()
{
    int h, m;

    times ob1;
    cout << "default constructor" << endl;
    ob1.display();

    cout << "Enter the times in hh:mm format" << endl;
    cin >> h >> m;
    cout << "parameterized constructor" << endl;
    times ob2(h, m);
    ob2.display();

    cout << "Enter the hours in hh:mm format (min=0)" << endl;
    cin >> h;
    cout << "parameterized constructor where min=0" << endl;
    times ob3(h);
    ob3.display();

    times ob4(ob2);
    cout << "copy constructor" << endl;
    ob4.display();

    return 0;
}

/*int main()
{
    times ob1;
    times ob2(10, 20, 30);
    //times ob3(10, 30);
    ob1.display();
    ob2.display();
   // ob3.display();
    return 0;
}*/