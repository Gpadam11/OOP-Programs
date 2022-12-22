// WAP to swap two integers using pass by reference.

#include <iostream>
using namespace std;
int swap(int &i, int &j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
    return 0;
}
int main()
{
  int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
//     cout << "Before swapping: " << a << " " << b << endl;
//     swap(a, b);
//     cout << "After swapping: " << a << " " << b << endl;
//     return 0;
// }
// int swap(int &x, int &y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
//     return 0;
// }
swap(a,b);
cout<<"After swapping: "<<a<<" "<<b<<endl;
}