// function argument 

#include <iostream>

using namespace std;

void print( char a = '*', int n = 80 ){
    for( int i = 0; i < n; i++ )
        cout << a;
    cout << endl;
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
