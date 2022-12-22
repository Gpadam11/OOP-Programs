#include <iostream>
#include <exception>
using namespace std;

class arrayexception : public exception
{
    public:
    const char *what()
    {
        return "Odd number exception";
    }
};

int main()
{
    int arr[5];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    try
    {
        for(int i=0;i<5;i++)
        {
            if(arr[i]%2!=0)
            {
                throw arrayexception();
            }
        }
    }
    catch(arrayexception e)
    {
        cout<<"Exception caught "<<endl;
        cout<<e.what();
    }
}