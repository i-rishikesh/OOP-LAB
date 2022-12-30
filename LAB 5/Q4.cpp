/*WAP to demonstrate the order of call of constructors and destructors
for a class.*/
#include<iostream>
using namespace std;

class xyz{
    int a;
    static int count;
    public:
        xyz()
        {
            a= ++count;
            cout<<"Constructor was called on object: "<<a<<endl;
            }
        ~xyz()
        {cout<<"Destr. was called on object: " <<a<<endl;}

};

int xyz::count;

int main()
{
    xyz a1, a2, a3;
    {xyz a4, a5;}
    xyz a6;

    return 0;
}