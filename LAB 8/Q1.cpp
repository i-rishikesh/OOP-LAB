#include <iostream>

using namespace std;

class Distance
{
public:
    int feet, inches;

    Distance() : feet(0), inches(0){};
    Distance(int a, int b) : feet(a)
    {
        inches = b % 12;
        if (b >= 12)
        {
            feet += (b / 12);
        }
    };

    Distance operator+(const Distance &b)
    {
        return Distance(feet + b.feet, inches + b.inches);
    }
    Distance operator+(int a)
    {
        return Distance(feet, inches + a);
    }

    Distance operator-()
    {
        return Distance(-feet, -inches);
    }

    void display()
    {
        cout << feet << " feet and " << inches << " inches.\n";
    }
};

int main()
{
    // Do stuff
    Distance d1(10, 10), d2(1, 3);
    Distance d3;

    d3 = d1 + d2;
    d3.display();

    d3 = d3 + 4;
    d3.display();

    d3 = -d3;
    d3.display();
    return 0;
}