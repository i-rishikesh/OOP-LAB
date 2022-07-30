/*Create a class which stores name, roll number and total marks for a
student. Input the data for a student and display it.
Modify the program
ii) to store marks in 5 subjects. Calculate the total marks and percentage
of a student and display it.*/
#include <iostream>
using namespace std;

class student {
    private:
     char name [30];
     int rollNo;
     int mark[5];
     int maths, phy,chem,comp,phe;
     int total;
     float perc;
    
    public:
    void getDetails(void);
    void putDetails(void);
};

void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout<<"Enter marks in maths \n";
    cin>>maths;
    cout<<"Enter marks physics \n";
    cin>>phy;
    cout<<"Enter marks in chem \n";
    cin>>chem;
    cout<<"Enter marks in comp \n";
    cin>>comp;
    cout<<"Enter marks in phe \n";
    cin>>phe;
    total=maths+phy+chem+comp+phe;
    perc=(float)total/500*100;
}

void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}

int main()
{
    student std[10];
    int n ,loop;

    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
}
cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
     
    return 0;
}