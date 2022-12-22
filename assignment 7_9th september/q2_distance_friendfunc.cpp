// Create a class which stores the x and y coordinates of a point. Write a function to find distance between two points, initialize the objects using parameterized and copy constructor.

#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x;
    int y;

public:
    point() // default constructor
    {
        x = 0;
        y = 0;
        cout << "Default constructor called" << endl;
    }

    point(int a, int b) // parameterized constructor
    {
        x = a;
        y = b;
    }
    point(point &obj) // copy constructor
    {
        x = obj.x;
        y = obj.y;
    }
    friend float distance(point, point); // friend function declared
};

float distance(point p1, point p2) // friend function
{
    float d;
    d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return d;
}

int main()
{
    point pd; // default constructor
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of point 1: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of point 2: ";
    cin >> x2 >> y2;
    point p1(x1, y1);     // parameterized constructor
    point p2(x2, y2);    // parameterized constructor
    point p3(p1);       // copy constructor
    cout << "The distance between point 1 and point 2 is " << distance(p1, p2) << endl; // parameterized constructor
    cout << "The distance between point 1 and point 3 is " << distance(p2, p3) << endl; // copy constructor
    return 0;
}
