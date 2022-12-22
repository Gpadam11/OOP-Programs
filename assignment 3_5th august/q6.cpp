#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int x;
    int y;
    int x1;
    int y1;

public:
    void input();
    void dist();
};

void Point::input()
{
    cout << "Enter value of x and y : ";
    cin >> x >> y;
    cout << "enter value of x1 and y1 :";
    cin >> x1 >> y1;
}

void Point::dist()
{
    cout << "Distance between "
         << "(" << x << "," << y << ") and "
         << "(" << x1 << "," << y1 << ")" << endl;
    cout << sqrt(((x - x1) * (x - x1)) + ((y - y1) * (y - y1))) << endl;
}

int main()
{
    Point a;
    a.input();
    a.dist();
    return 0;
}
// distance between two points