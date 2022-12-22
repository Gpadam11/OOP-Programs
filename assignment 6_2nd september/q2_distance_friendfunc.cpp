/*
Create two classe which store distance in feet, inches and meter, centimeter format respectively.
Write a function which compares distance in object of these clases and display the larger one.
*/

#include <iostream>
using namespace std;

class distance2;
class distance1
{
    double feet;
    double inches;

public:
    void input()
    {
        cout << "Enter the distance 1 in feet and inches respectively: ";
        cin >> feet >> inches;
        inches = feet * 12 + inches;
    }
    friend void compare(distance1, distance2);
};

class distance2
{
    double meter;
    double centi;

public:
    void input()
    {
        cout << "Enter the distance 2 in meter and centimeter: ";
        cin >> meter >> centi;
        centi = meter * 100 + centi;
    }
    friend void compare(distance1, distance2);
};

void compare(distance1 x, distance2 y)
{

    if (y.centi * 0.393 > x.inches)
        printf("Distance 2 is greater \n");
    else if (y.centi * 0.393 < x.inches)
        printf("Distance 1 is greater \n");
    else
        printf("Both are equal \n");
}

int main()
{
    distance1 x;
    distance2 y;
    x.input();
    y.input();
    compare(x, y);
    return 0;
}