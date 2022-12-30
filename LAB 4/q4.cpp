//inline functine

#include <iostream>

using namespace std;

inline int square( int a ){
    return a*a;
}

inline int cube( int a ){
    return a*a*a;
}

int main(){
    int n;
    cout << "Enter no. to find square and cube of it: ";
    cin >> n;
    cout << "Square: " << square(n) << "\nCube: " << cube(n) << endl;
    // End
    return 0;
}
