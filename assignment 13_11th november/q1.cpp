// Write a program to craete an exception. if the user character is blank then throw the blank character exception else convert the uppercase character to lowercase character.

#include <iostream>
#include <exception>
using namespace std;

class blank
{
    char ch;

public:
    blank()
    {
    }
    blank(char c)
    {
        ch = c;
    }
    void check()
    {
        try
        {
            if (ch ==' ')
            {
                throw ch;
            }
            else if(ch<='Z' && ch>='A')
            {
                ch = ch + 32;
                cout << "The lowercase character is: " << ch;
            }
            else
            {
                cout << "The character is: " << ch;
            }
        }
        catch (char e)
        {
            cout << "Blank character exception";
        }
    }
};

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    blank b(c);
    b.check();
    return 0;
}