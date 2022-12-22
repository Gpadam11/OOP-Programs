// Create a class which stores name, author, and price of a book. Store information for n number of books.Display information of all the books in a given price range using function.

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class Books
{
public:
    string book_name[100];
    string author_name[100];
    int price[100];
    int low, high;
    void getdata();
    void pricerange();
    void display();
};
void Books::getdata()
{
    int n;
    cout << "enter number of the books\n";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Enter name of the book\n";
        cin>> book_name[i];
        
        cout << "Enter price of the book\n";
        cin >> price[i];
        
        cout << "Enter author of the book\n";
        cin>> author_name[i];
        cin.ignore();

    }
}

void Books::pricerange()
{
    cout << "Enter the lower limit of the price range\n";
    cin >> low;
    cout << "Enter the upper limit of the price range\n";
    cin >> high;
}

void Books::display()
{
    int n;
    for (int i = 0; i < n; i++)
    {
        if (price[i] >= low && price[i] <= high)
        {
            cout << "Name of the book: " << book_name[i] << endl
                 << "Author of the book: " << author_name[i] << endl
                 << "Price of the book: " << price[i] << endl;
        }
    }
}

int main()
{
    Books ob;
    ob.getdata();

    ob.pricerange();
    ob.display();
}