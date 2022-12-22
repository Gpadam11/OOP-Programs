// WAP to increment the value of an argument given to function.

#include <iostream>
using namespace std;


int increment(int c)
{
    c++;
    cout << "Incremented value: " << c;
    return 0;
}
int main()
{
  int c;
    cout << "Enter a numbers: ";
    cin >> c;
    increment(c);
    return 0;
}