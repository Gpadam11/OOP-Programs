//Q3 WAP to convert temp from centigrade to Fahrenheit scale.

#include <iostream>
using namespace std;
int main()
{
    double c, f;
    cout << "Please enter temperature in celsius: ";
    cin >> c;
    f = c * 1.8 + 32;
    cout << "Temperature in fahrenheit: " << f << endl;
    return 0;
}
