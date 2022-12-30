/*Create a class which stores account number, customer name and balance.
Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’
class stores minimum balance. The ‘Current’ class stores the over-due amount.
Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.] -display balance
Display data from each class using virtual function.*/

#include <iostream>

using namespace std;

class Account
{
public:
    string name;
    int custNum, bal;
    Account()
    {
        cout << "Enter name, cust. no, balance: ";
        cin >> name >> custNum >> bal;
    }
    virtual void withdraw(int) = 0;
    virtual void deposit(int amt)
    {
        bal += amt;
    }
    virtual void display()
    {
        cout << "Name: " << name << "\nBalance: " << bal << endl;
    }
};

class Savings : public Account
{
public:
    const int MIN_BAL = 5000;
    void withdraw(int amt)
    {
        if (bal - amt < MIN_BAL)
        {
            cout << "Can't withdraw.\n";
            return;
        }
        bal -= amt;
    }
};

class Current : public Account
{
public:
    int ovamt;
    Current()
    {
        cout << "Input overdue amount: ";
        cin >> ovamt;
    }
    void withdraw(int amt)
    {
        if (bal - amt < ovamt)
        {
            cout << "Can't withdraw.\n";
            return;
        }
        bal -= amt;
    }
};

int main()
{
    // Do stuff
    Savings ac1;
    Current ac2;

    ac1.deposit(100);
    ac1.withdraw(5000);

    ac1.display();
    ac2.display();
    return 0;
}