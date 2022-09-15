//Create a class complex which stores real and imaginary part of a complex number. Input 10 complex numbers and display them.
#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;
    public:
        void input();
        void display();
};

void Complex::input()
{
    cout << "Enter complex number's real and imaginary value : ";
    cin >> real >> img;
}

void Complex::display()
{
    cout << real << " + " << img << "j" <<endl;
}

int main()
{
    Complex arr[10];
    int i;
    for (i=0; i<10; i++)
        arr[i].input();
    for (i=0; i<10; i++)
        arr[i].display();

    return 0;
}