// WAP to throw and hanndle array out of bound exception

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
        for(int i=0;i<6;i++)
    {
        try
        {
            int i=0;
            if (a[i] <= a[5])
            {
                cout << "Array is:" << a[i] << endl;
            }
            else
            {
                // throw("array is out of bound");
                throw 505;
            }
            
        }

        catch (...)
        {
            cout << "Array out of bound exception";
        }
    }
    return 0;
}
