// WAP to swap two members of a class using call by value.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}