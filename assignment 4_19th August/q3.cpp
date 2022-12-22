//WAP to find area of a circle, rectangle, and triangle using function overloading.

 #include <iostream>
 #include<math.h>
    using namespace std;
    int triangle()
    {
        int a,b,c;
        cout<<"Enter the three sides of the triangle\n";
        cin>>a>>b>>c;
        double s, area;
        s=(a+b+c)/2; //calculating s
        area=sqrt(s*(s-a)*(s-b)*(s-c)); //calculating area
        cout<<"Area="<<area<<endl;
        return 0;
    }
    int reactangle()
    {
        int a,b;
        cout<<"Enter the length and breadth of the rectangle\n";
        cin>>a>>b;
        double area;
        area=a*b;
        cout<<"Area="<<area<<endl;
        return 0;
    }
    int circle()
    {
        int r;
        cout<<"Enter the radius of the circle\n";
        cin>>r;
        double area;
        area=3.14*r*r;
        cout<<"Area="<<area<<endl;
        return 0;
    }
    int main()
    {
        int ch;
        cout<<"Enter the choice"<<endl;
        cout<<"1.Triangle\n2.Rectangle\n3.Circle\n";
        cin>>ch;
        switch(ch)
        {
            case 1: triangle();
                    break;
            case 2: reactangle();
                    break;
            case 3: circle();
                    break;
            default: cout<<"Invalid choice";
        }
        return 0;
    }