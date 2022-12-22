// WAP to demonstrate all types of inheritance


#include <iostream>
using namespace std;

class A
{    
public:
    void display_A()
    {
        cout << "The value of a is 10" << endl;
    }
};

class B : public A //single inheritance
{
public:
    void display_B()
    {
        cout << "The value of b is 20"<< endl;
    }
};

class C : public B //multilevel inheritance
{
public:
    void display_C()
    {
        cout << "The value of c is 30"<< endl;
    }
};

//multiple inheritance
class D
{
public:
    void display_D()
    {
        cout << "The value of d is 40"<< endl;
    }
};

class E
{
public:
    void display_E()
    {
        cout << "The value of e is 50"<< endl;
    }
};

class F : public D, public E
{
public:
    void display_F()
    {
        cout << "The value of f is 60"<< endl;
    }
};
//hierarchical inheritance
class G:public E
{
public:
    void display_G()
    {
        cout << "The value of g is 70"<< endl;
    }
};

class H:public E
{
public:
    void display_H()
    {
        cout << "The value of h is 80"<< endl;
    }
};


int main()
{
    C obj;
    obj.display_A();
    obj.display_B();
    obj.display_C();
    F obj1;
    obj1.display_D();
    obj1.display_E();
    obj1.display_F();
    G obj2;
    obj2.display_E();
    obj2.display_G();
    H obj3;
    obj3.display_E();
    obj3.display_H();
    return 0;
}
