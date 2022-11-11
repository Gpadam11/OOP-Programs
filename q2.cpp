
#include <iostream>
#include <exception>
using namespace std;

class markexception : public exception
{
    int mark;
    public:
    const char *whatexp()
    {
        return "Mark is out of range";
    }
};
int main()
{
    int mark;
    cout << "Enter the mark: ";
    cin >> mark;
    try
    {
        if (mark < 0 || mark > 100)
        {
            throw markexception();
        }
        else
        {
            cout << "The mark is: " << mark;
        }
    }
    catch (markexception e)
    {
        cout<<"Exception caught "<<endl;
        cout << e.whatexp();
    }
    return 0;
}