//WAP to throw and hanndle zero exception

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw 0;
        }
        else
        {
            int c=a/b;
            cout << "The division is: " <<c;
        }
    }
    catch (int e)
    {
        cout << "Division by zero exception";
    }
    return 0;
}