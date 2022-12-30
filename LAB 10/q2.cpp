#include <iostream>
using namespace std;

template< class T1, class T2 >
void display( T1 x, T2 y ){
    cout << x << " " << y << endl;
}

int main(){
    float a = 1.3;
    int b = 2;
    display( a, b );
    display( b, a );
    return 0;
}