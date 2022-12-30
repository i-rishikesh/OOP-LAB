/*Create a class which a complex number. Add two objects and display the resultant object.
Overload the ++(post and pre) operator for the class*/
#include <iostream>

using namespace std;

class Complex
{
public:
    int real, imag;
    Complex() : real(0), imag(0){};
    Complex(int r, int i) : real(r), imag(i){};
    void display()
    {
        cout << real << " + " << imag << "i\n";
    }
    Complex operator+(const Complex &b)
    {
        return Complex(real + b.real, imag + b.imag);
    }

    // Let's do prefix for incrementing real
    // postfix for incrementing imag
    void operator++() { real++; };
    void operator++(int) { imag++; };
};

int main()
{
    Complex c1(1, 2), c2(2, 3), c3;
    c3 = c1 + c2;
    c3.display();
    c3++;
    ++c3;
    c3.display();
    return 0;
}