//WAP to demonstrate multiple try and catch blocks
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter NUMBER";
    cin>>a;
    try
    {
        if(a>0)
            throw 5.5;
        else if(a<0)
            throw 'A';
        else
            throw 34;
    }
    catch(double x)
    {
        cout<<"Double exception";
    }
    catch(float y)
    {
        cout<<"Float exception";
    }
    catch(char z)
    {
        cout<<"Character exception";
    }
    return 0;
}