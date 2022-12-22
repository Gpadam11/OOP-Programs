// Create a class which stores the x and y coordinates of a point. Write a function to find distance between two points, initialize the objects using parameterized and copy constructor.

#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x1,x2;
    int y1, y2;

public:
    point() // default constructor
    {
        x1 = 0;
        y1 = 0;
        x2=0;
        y2=0;
        cout << "Default constructor called" << endl;
    }

    point(int a, int b, int c, int d) // parameterized constructor
    {
        x1 = a;
        x2 = b;
        y1 = c;
        y2 = d;
    }
    point(point &obj) // copy constructor
    {
        x1 = obj.x1;
         x2 = obj.x2;
        y1 = obj.y1;
         y2 = obj.y2;
    }
   
float distance(float x1, float x2, float y1, float y2 ) 
{
    float d;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "The distance between point 1 and point 2 is " << d << endl; // parameterized constructor
    return d;
}

};

int main()
{
    //point pd; // default constructor
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of point 1: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of point 2: ";
    cin >> x2 >> y2;
    point p1; 
    p1.distance(x1,y1,x2,y2);
    point p2(p1);      
    p2.distance(x1,y1,x2,y2);
    return 0;
    

}
