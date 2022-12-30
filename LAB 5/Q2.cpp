#include<iostream>
using namespace std;

class tt{
    int hour, min;
    public:
        tt() {hour=1; min=0;};
        tt(int a, int b) {hour= a; min=b;};
        tt(tt &c) {hour=c.hour; min= c.min;};
        void display() {cout <<hour<<":"<<min<<endl;}
};

class tt2{
    int hour, min;
    public:
        tt2(int h=5, int m=0) {hour= h; min=m;};
        void display() {cout <<hour<<":"<<min<<endl;}
};

int main(){
    tt a, b(1, 2);
    tt c(b);
    tt2 d(9);
    a.display();
    b.display();
    c.display();
    d.display();


    return 0;
}