// WAP to count the no of objects in a class

#include <iostream>
using namespace std;
class count
{
    public:
    static int c;
    int countobjects()
    {
        c++;
        return 0;
    }
    void display()
    {
        cout<<"No of objects: "<<c<<endl;
    }
};
int count::c;
int main()
{

    count c1,c2,c3;
    c1.countobjects();
    c1.display();

    c2.countobjects();
    c2.display();

    c3.countobjects();
    c3.display();
    
    return 0;
}
