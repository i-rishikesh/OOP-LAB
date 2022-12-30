/*Create a class which stores employee name,id and salary Derive two
classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class
stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number
of hours and pay per hour. Calculate the salary of a regular employee and a
par-time employee, using virtual function*/

#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    int id, salary;
    Employee()
    {
        cout << "Enter name, id: ";
        cin >> name >> id;
    }
    virtual void display()
    {
        cout << "Name: " << name << "\nID: " << id;
        cout << "\nSalary: " << salary << endl;
    }
};

class Regular : public Employee
{
public:
    int da, hra, bPay;
    Regular()
    {
        cout << "Enter ha, dra, bPay: ";
        cin >> da >> hra >> bPay;
        // Calculate salary
        salary = da + hra + bPay;
    }
};
class PartTime : public Employee
{
public:
    int hours, ppH;
    PartTime()
    {
        cout << "Enter hours and pay per hour: ";
        cin >> hours >> ppH;
        salary = hours * ppH;
    }
};

int main()
{
    Regular e1;
    PartTime p1;

    e1.display();
    p1.display();
    return 0;
}