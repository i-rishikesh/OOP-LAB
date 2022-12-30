// WAP to find volume of sphere ,cylinder and a cuboid ,using function overloading .
#include <iostream>
using namespace std;
float volume(int,int);
float volume(float);
int volume(int);
int main()
{
    int r,h,a;
    float r1;
    cout<<"Enter radius and height of cylinder:";
    cin>>r>>h;
    cout<<"Enter side of cube:";
    cin>>a;
    cout<<"Enter radius of sphere:";
    cin>>r1;
    cout<<"Volume of cylinder is "<<volume(r,h);
    cout<<"Volume of cube is"<<volume(a);
    cout<<"\n Volume of sphere is"<<volume(r1);
    return 0;
}
float volume(int r ,int h)
{
    return(3.14*r*r*h);
}
float volume(float r1)
{
    return((4*3.14*r1*r1*r1)/3);

}
int volume(int a)
{
    return(a*a*a);

}