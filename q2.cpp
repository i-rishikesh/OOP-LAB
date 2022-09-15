//Create a class which stores name, roll number and total marks for a student. Input the data for a student and display it.
#include<iostream>
using namespace std;

class Database
{
    string name;
    int marks;
    int roll;
    public:
        void input();
        void display();
};

void Database::input()
{
    cout << "Enter name : ";
    getline(cin, name);
    cout <<  "Enter roll and marks : ";
    cin >> roll >> marks;
}

void Database::display()
{
    cout << "Name : " << name <<endl;
    cout << "Roll number : " << roll <<endl;
    cout << "Marks : " << marks <<endl;
}

int main()
{
    Database db;
    db.input();
    db.display();

    return 0;
}