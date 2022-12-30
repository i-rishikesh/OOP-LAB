//WAP to display the message ”hello” followed by your name on screen.
#include<iostream>
using namespace std;

void display()
{
    string s;
    cout << "ENter you name : ";
    getline(cin, s);
    cout << "Hello " << s << endl;
}

int main()
{
    display();
    return 0;
}