#include <iostream>
using namespace std;
class Account
{
public:
    int acc_no;
    string name;
    double balance;
    void getdata()
    {
        cout << "Enter the account number of the customer" << endl;
        cin >> acc_no;
        cout << "Enter the name of the customer" << endl;
        cin >> name;
        cout << "Enter the balance of the customer" << endl;
        cin >> balance;
    }
    void display()
    {
        cout << "The account number of the customer is " << acc_no << endl;
        cout << "The name of the customer is " << name << endl;
        cout << "The balance of the customer is " << balance << endl;
    }
};
class Saving : public Account
{
public:
    double withdrawamt, minbal = 100;
    void withdraw()
    {
        double amount;
        cout << "Enter the amount to be withdrawn" << endl;
        cin >> withdrawamt;
        if (balance >= minbal)
        {
            if (withdrawamt > minbal)
            {
                balance = balance - withdrawamt;
                cout << "The balance after withdrawal is " << balance << endl;
            }
        }
        else
        {
            cout << "Minimum balance:" << minbal << endl;
        }
    }
};
class Current : public Account
{
public:
    double withdrawamt, minbal = 100, overdue;
    void withdraw()
    {
        double amount;
        cout << "Enter the amount to be withdrawn" << endl;
        cin >> amount;
        overdue = balance-withdrawamt;
        if (overdue < minbal)
        {
            cout << "Overdue amount is " << overdue << endl;
        }
        else
        {
            cout <<"balance is "<<overdue<<endl;
        }
    }
};

int main()
{
    Saving ob1;
    ob1.getdata();
    ob1.display();
    ob1.withdraw();
    Current ob2;
    ob2.withdraw();
    return 0;
}
