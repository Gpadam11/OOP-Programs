// Create a class which stores a string and its length as data members. Include all the constructors. Include a member function to join two strings and display the concatenated string.

#include <iostream>
using namespace std;

class concat
{
private:
    string s;
    int l;

public:
    concat()
    {
        s = "";
        l = 0;
    }
    concat(string s1, int n)
    {
        s = s1;
        l = n;
    }
    concat(concat &obj)
    {
        s = obj.s;
        l = obj.l;
    }

    void showDetails()
    {
        cout << "String: " << s << endl;
        cout << "Lenght: " << l << endl;
    }
    void str_concat(string str1, string str2)
    {
        string newstr = str1 + str2;
        cout << "Added string: " << newstr << endl;
    }
};

int main()
{
    concat obj1;
    obj1.showDetails();

    string str1, str2;
    cout << "\nEnter the first string: ";
    getline(cin, str1);
    cout << "\nEnter the second string: ";
    getline(cin, str2);

    concat obj2(str1, str1.size());
    obj2.showDetails();
    concat obj3(str2, str2.size());
    obj3.showDetails();
    concat obj4(obj2);
    obj4.str_concat(str1, str2);

    return 0;
}