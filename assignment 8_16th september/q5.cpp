/*CREATE A CLASS 'SHAPE'. DERIVE THREE CLASSES FROM IT : CIRCLE, TRIANGLE AND RECTANGLE. INCLUDE THE RELEVANT DATA MEMBERS
AND FUNCTIONS IN ALL THE CLASSES. FIND THE AREA OF EACH SHAPE AND DISPLAY IT. */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Shape
{

};

class circle:public Shape
{
    public:
        float pi=3.14;
        float radius;
        
        void AreaCircle()
        {
            cout<<"Enter the radius of the circle : ";
            cin>>radius;
            float area=0.0;
            area=pi*radius*radius;
            cout<<"Area of the circle : "<<area<<endl;
        }
};

class triangle:public Shape
{
    public:
        float base,height;
        
        void AreaTriangle()
        {
            cout<<"Enter the base and height of the triangle : ";
            cin>>base>>height;
            float area=0.0;
            area=0.5*base*height;
            cout<<"Area of the triangle : "<<area<<endl;
        }
};

class rectangle:public Shape
{
    public:
        int length,breadth;
        
        void AreaRectangle()
        {
            cout<<"Enter the length and breadth of the rectangle :";
            cin>>length>>breadth;
            float area=0;
            area=length*breadth;
            cout<<"Area of the rectangle :"<<area<<endl;
        }

};

int main()
{
    circle c;
    triangle t;
    rectangle r;
    c.AreaCircle();
    t.AreaTriangle();
    r.AreaRectangle();
    return 0;
}