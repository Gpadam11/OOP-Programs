#include <iostream>
using namespace std;

class Complex
{
public:
    int realNumber[10];
    int imagNumber[10];
    void input();
    void display();
};
void Complex::input()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the real part of the complex number"<<i+1<<endl;
        cin >> realNumber[i];
        cout << "Enter the imaginary part of the complex number: \n";
        cin >> imagNumber[i];
    }
}

void Complex::display()
{
    for (int i = 0; i < 10; i++)
    {
        cout << realNumber[i] << "+" << imagNumber[i] << "i" << endl;
    }
}

int main()
{
    Complex c;
    c.input();
    c.display();
    return 0;
}