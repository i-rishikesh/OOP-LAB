/* WAP to count number of objects created from a class using concept of
static data members and static member function*/
#include<iostream>
using namespace std;

class xyz{
    int a;
    static int count; 
    public:
        xyz() 
        { a= 0; ++count;}
        ~xyz()
        {count--;}
        static void display_count()
        {
            cout <<"Number of objects currently existing : " <<count<<endl;
        }

};

int xyz::count;

int main(){
    xyz a, b, c;
    xyz::display_count();
    {
        xyz c, d;
        xyz::display_count();
    }
    xyz::display_count();
    xyz e;
    xyz::display_count();

    return 0;
} 