/*Extra Questions:
Q.1) Write a Program in 'C++' to create a class Bank_Acc having data 
members as Account_No, Name, Balance and member functions as get_info( )
, deposit( ), withdraw( ), show_info( ) to perform the related operations. In case of withdraw( ), 
there should be minimum balance as 500, and for deposit( ), you can deposit maximum 3 lakhs per day.*/
#include <iostream>
using namespace std;
class Bank
{
public:
    char name[20];
    int account_number;
    int balance;

    void get_info()
    {
        cout << "\nEnter Account Holders Name:";
        gets(name);
        cout << "\nEnter account number:";
        cin >> account_number;
        cout << "Enter balance to deposit:";
        cin >> balance;
    }

    void deposit()
    {
        int bal;
        cout << "\nEnter the amout to deposit:";
        cin >> bal;
        if (bal < 300000)
        {
            balance += bal;
            cout << "\nAmount deposited successfuly\nYour New Balance:" << balance;
        }
        else
        {
            cout << "you have reached your limit";
            cout << "\nYour Balance: " << balance;
        }
        }

    void withdraw()
    {
        int bal;
        cout << "\nYour balance :" << balance << "\nEnter amount to withdraw:";
        cin >> bal;
        if (bal <= balance)
        {
            balance -= bal;
            cout << "\nRemaining Balance:" << balance;
        }
        else
        {
            cout << "you dont have this much amount in your account";
            exit(0);
        }
    }

    void display()
    {
        cout << "\nName :";
        puts(name);
        cout << "id : " << account_number;
        cout << "\nBalance :" << balance;
    }
};

int main()
{
    int i;
    Bank bk;
    bk.get_info();
    cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
    cin >> i;
    if (i == 1)
    {
        bk.display();
    }
    else if (i == 2)
    {
        bk.deposit();
    }
    else if (i == 3)
    {
        bk.withdraw();
    }
    return 0;
}