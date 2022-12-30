//Write a program to demonstrate order of call of constructors and destructors in the case of multiple inheritance
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"First: A class constructor."<<endl;
    } 
    ~A()
    {
        cout<<"Third: A class destructor."<<endl;
    }
};
class B
{
public:
    B()
    {
        cout<<"Second: B class constructor."<<endl;
    } 
    ~B()
    {
        cout<<"Second: B class destructor."<<endl;
    }
};
class derived:public A, public B
{
public:
    derived()
    {
        cout<<"Third: derived class constructor."<<endl;
    } 
    ~derived()
    {
        cout<<"First: derived class destructor."<<endl;
    }
};
int main()
{
    derived d;
    return 0;
}