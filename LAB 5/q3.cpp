/*Create a class which stores a string and its length as data members.
Include all the constructors. Include a member function to join two strings and
display the concatenated string.*/
#include<iostream>
using namespace std;

class s{
    string st;
    int length;
    public:
        void display() 
        {cout <<"\nString= "<<st<< "\nLength= "<<length<<endl;}
       
        s()
        { st="None"; length= 4;}

        s(string t, int l) 
        {st= t; length= l;}
        
        s(s &a) 
        {st= a.st; length= a.length;}

        void concat(s &d)
        {
            string c= st+ d.st;
                cout<< "Concatenating "<<st<<" and "<<d.st<<"= "<< c<<endl;
        }
};

class s2{
    string st;
    int length;
    public:
        void display()
         {cout <<"\nString= "<<st<< "\nLength= "<<length<<endl;}
        
        s2(string t="NA") 
        {st= t, length =t.size();}
        
};

int main(){
    s a, b("maximum", 7);
    s c(b);
    s2 d("half");
    d.display();
    a.concat(b);


    return 0;
}