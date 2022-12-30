//Modify the program to store marks in 5 subjects. Calculate the total marks and percentage of a student and display it.
#include<iostream>
using namespace std;

class Database
{
    string name;
    int marks[5];
    int roll;
    public:
        void input();
        void display();
        void calculate();
};

void Database::input()
{
    cout << "Enter name : ";
    getline(cin, name);
    cout <<  "Enter roll : ";
    cin >> roll;
    cout <<  "Enter marks : ";
    for (int i=0; i<5; i++)
        cin >> marks[i];
}

void Database::display()
{
    cout << "Name : " << name <<endl;
    cout << "Roll number : " << roll <<endl;
    cout << "Marks : ";
    for (int i=0; i<5; i++)
        cout << marks[i] << " ";
    cout << endl;
}

void Database::calculate()
{
    int sum=0, loop=5;
    while (loop--) sum+= marks[loop];
    cout << "Total marks : " << sum << endl;
    cout << "Percentage : " << sum/5 << endl;
}

int main()
{
    Database db;
    db.input();
    db.display();
    db.calculate();

    return 0;
}