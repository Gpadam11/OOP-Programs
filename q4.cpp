#include <iostream>
#include <exception>
using namespace std;

class primeexception : public exception
{
public:
    const char *whatexp()
    {
        return "prime number exception";
    }
};

int main()
{
    int n, c = 0;
    cout << "Enter the number ";
    cin >> n;
    try
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            throw primeexception();
        }
    }
    catch (primeexception e)
    {
        cout << "Exception caught " << endl;
        cout << e.whatexp();
    }
}