/*Create a class shape. Derive three classes from it; Circle, Square and
Triangle. Find area of each shape and display it, using virtual function.*/

#include <iostream>
using namespace std;

class Shape
{
public:
    float s1, s2;
    Shape() : s1(0), s2(0){};
    virtual void input() = 0;
    virtual void area() = 0;
};

class Circle : Shape
{
public:
    void input()
    {
        cout << "Enter radius: ";
        cin >> s1;
    }
    void area()
    {
        float a = (3.14 * s1 * s1);
        cout << "Area of circle: " << a << endl;
    }
};

class Rectangle : Shape
{
public:
    void input()
    {
        cout << "Enter sides: ";
        cin >> s1 >> s2;
    }
    void area()
    {
        float a = (s1 * s2);
        cout << "Area of rectangle: " << a << endl;
    }
};

class Triangle : Shape
{
public:
    void input()
    {
        cout << "Enter sides: ";
        cin >> s1 >> s2;
    }
    void area()
    {
        float a = (0.5 * s1 * s2);
        cout << "Area of triangle: " << a << endl;
    }
};

int main()
{
    Circle c;
    c.input();

    Rectangle r;
    r.input();

    Triangle t;
    t.input();

    c.area();
    r.area();
    t.area();
}