// WAP using C++ that uses dynamic constructor to allocate memory to an array of integer. count the no. of odd and even elements given in an array.

#include <iostream>
using namespace std;

class array
{
    int *a;
    int n;
    int odd, even;

public:
    array(int nm)
    {
        // this->n = n;
        n = nm;
        a = new int[n];
        odd = 0;
        even = 0;
    }
    void getdata()
    {
        cout << "Enter the elements of the array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void count()
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    void display()
    {
        cout << "The number of even elements are " << even << endl;
        cout << "The number of odd elements are " << odd << endl;
    }
};

int main()
{
    int nm;
    cout << "Enter the size of the array" << endl;
    cin >> nm;
    array A(nm);
    A.getdata();
    A.count();
    A.display();
    return 0;
}
