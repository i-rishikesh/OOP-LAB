#include<iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;
    public:
        void input();
        Distance sum(Distance a);
        void display();
};

void Distance::input()
{
    cout << "Enter distance in Feet and Inches : ";
    cin >> feet >> inches;
}

Distance Distance::sum(Distance a)
{
    Distance b;
    b.feet= a.feet + feet;
    b.inches= a.inches + inches;
    return b;
}

void Distance::display()
{
    cout << "Distance = " << feet << " feet " << inches << " inches" <<endl;
}



int main()
{
    Distance a, b, c;
    a.input();
    b.input();
    c= a.sum(b);
    c.display();

    return 0;
}