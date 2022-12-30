//increment the value of an argument given to function 
#include <iostream>

using namespace std;

void increment( int &a ){
    a++;
}

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    // Increment
    increment(a);
    cout << "After incrementing: " << a << endl;
    // End
    return 0;
}
