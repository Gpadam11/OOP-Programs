// WAP to swap private members of two class using friend function [The class have no relation with each other].

#include <iostream>
using namespace std;
class num2;
class num1
{
    private:
    int a;

public:
    void input()
    {
        cout << "Enter the first digit: ";
        cin >> a;
    };
    friend void swap(num1, num2);
};

class num2
{
   private: int b;

public:
    void input()
    {
        cout << "Enter the second digit: ";
        cin >> b;
    }
    friend void swap(num1, num2);
};

void swap(num1 x, num2 y)
{
    int temp = y.b;
    y.b = x.a;
    x.a = temp;

    cout << "The numbers after swapping are " << x.a << " " << y.b;
}

int main()
{
    num1 a1;
    num2 b1;

    a1.input();
    b1.input();
    swap(a1, b1);
    return 0;
}
