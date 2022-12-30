/*Create a class complex which stores real and imaginary part of a complex
number. Include all types of constructors and destructor. The destructor should
display a message about the destructor being invoked. Create objects using
different constructors and display them.*/
#include<iostream>
using namespace std;

class complex1{
    int i, j;
    public:
        complex1(int a=99, int b=50)
        {i=a; j=b;}

        complex1(complex1 &c)
        {i= c.i; j= c.j;}

        void display()
        {cout << "\n" << i<<" "<<j<<"j\n";}

        ~complex1()
        {cout << "\ndestroying object...\n";};
};

class complex2{
    int i, j;
    public:
        complex2()
        {i= 100; j= 100;};
        
        complex2(int a, int b)
        {i=a; j=b;};

        void display()
        {cout << "\n" << i<<" "<<j<<"j\n";}

        ~complex2()
        {cout << "\ndestroying object...\n";};
};

int main(){
    complex1 a, b(10, 20), c(30);
    complex1 d(c);
    complex2 e, f(90, 80);
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();
    f.display();
}