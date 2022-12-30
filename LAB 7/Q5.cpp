#include<iostream>
using namespace std;
class student
{
    protected :
    string name;
    int roll,age;
    public:
        void getinfo(string n,int r,int a)
        {
            name=n;
            roll=r;
            age=a;
        }
};
class A : public student{
    int marks[5];
    public:
        void get(int ar[])
        {
            //cout<<"Enter 5 marks : ";
            for(int x=0;x<=4;x++)
                marks[x]=ar[x];
        }
        void display()
        {
            cout<<"Name of student : "<<name<<endl;
            cout<<"Age of student : "<<age<<endl;
            cout<<"Roll number of student : "<<roll<<endl;
            cout<<"Five subject marks  :  ";
            for(int x=0;x<=4;x++)
                cout<<marks[x]<<" ";
        }   
    
};
int main()
{
    A a1;
    a1.getinfo("Rishikesh",2105734,19);
    cout<<"Enter 5 subject markss : ";
    int ar[5];
    for(int x=0;x<=4;x++)
        cin>>ar[x];
    a1.get(ar);
    a1.display();

}