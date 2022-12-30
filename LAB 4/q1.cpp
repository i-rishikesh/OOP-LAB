//WAP to find area of a circle, rectangle and a triangle using the concept of function overloading.
#include <iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);

int main()
{
    int l,b;
    float r, b2, h;

    cout<<"Enter length and breadth of rectangle:";
    cin>>l>>b;

    cout<<"Enter radius of circle:";
    cin>>r;

    cout<<"Enter base length and height of triangle:";
    cin>>b2>>h;

    cout<<"\nArea of rectangle is "<< area(l,b);
    cout<<"\nArea of circle is "<< area(r);
    cout<<"\nArea of triangle is "<< area(b2, h);
}

int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float b2, float h)
{
    return(0.5*b2*h);
}