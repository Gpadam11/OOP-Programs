// Create a class with integer data members. Include functions for input and output in class. Count the no. of times each function is called and display it.

#include <iostream>
using namespace std;
class count
{
public:
    static int c;
    int input()
    {
        c++;
        return 0;
    }
    int display()
    {
        cout << "No of times input function is called: " << c << endl;
        return 0;
    }

};
int count::c; 
    int main()
    {

        count c1, c2, c3;
        c1.input();
        //c1.display();

        c2.input();
        //c2.display();

        c3.input();
        c3.display();

        return 0;
    }