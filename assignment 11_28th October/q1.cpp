// 1.Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area of each shape and display it, using virtual function.

#include <iostream>
using namespace std;

class shape
{
public:
    float area = 0.0;
    virtual void display()
    {
    //     cout << "shape";
    }
};

class circle : public shape
{
public:
    float pi = 3.14;
    float radius;
    void AreaCircle()
    {
        cout << "Enter the radius of the circle : ";
        cin >> radius;
        area = pi * radius * radius;
    }
    void display()
    {
        cout << "Area of the circle : " << area << endl;
    }
};

class square : public shape
{
public:
    int s;
    void AreaSquare()
    {
        cout << "Enter the dimention of square :";
        cin >> s;
        area = s * s;
    }
    void display()
    {
        cout << "Area of the square :" << area << endl;
    }
};

class triangle : public shape
{
public:
    float base, height;
    void AreaTriangle()
    {
        cout << "Enter the base and height of the triangle : ";
        cin >> base >> height;
        area = 0.5 * base * height;
    }
    void display()
    {
        cout << "Area of the triangle : " << area << endl;
    }
};

int main()
{
    shape *s;
    circle c;
    square sq;
    triangle t;
    s = &c;
    c.AreaCircle();
    s->display();
    s = &sq;
    sq.AreaSquare();
    s->display();
    s = &t;
    t.AreaTriangle();
    s->display();
    return 0;
}
