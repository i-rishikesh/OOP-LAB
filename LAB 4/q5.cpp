//pass by reference 

#include <iostream>

using namespace std;

void swap( int &a, int &b ){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swap
    swap(a,b);
    cout << "Swapping: " << a << " " << b << endl;
    // End
    return 0;
}
