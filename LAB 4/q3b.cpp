// default argument 

#include <iostream>

using namespace std;

void print( char a, int n ){
    for( int i = 0; i < n; i++ )
        cout << a;
    cout << endl;
}

void print( char a ){
    print( a, 80 );
}

void print(){
    print( '*', 80 );
}

int main(){
    char a;
    int n;
    cout << "Enter a character and no. of times to show it: ";
    cin >> a >> n;
    print( a, n );
    print( a );
    print();
    // End
    return 0;
}
