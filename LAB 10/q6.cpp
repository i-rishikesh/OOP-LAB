#include<iostream>
using namespace std;
#define N 4
int main()
{
    try
    {
        int ar[N];
        cout<<"Enter 4 elements : ";
        int x=0;
        int a;
        while(true){
            cin>>a;
            if(x==4)
                throw x;
            else
                ar[x++]=a;
        }
    }
    catch(...)
    {   
        cout<<"Array index out of bounds ";
    } 
}