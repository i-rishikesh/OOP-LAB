#include<iostream>
using namespace std;
class dist
{
float feet, inches;
public:
dist( ){
feet=inches=0.0;
}
dist (float f, float i)
{
feet=f;
inches=i;
}
bool operator > (dist d2);
bool operator==(dist d2);
dist operator + (dist d2);
void display()
{
cout<<feet<<"feet "<<inches<<"inches"<<"\n";
}
};
 dist dist:: operator+(dist d2)
 	{
 		dist d;
 		d.feet= feet + d2.feet;
        d.inches=inches+d2.inches;
 		return d;
	 }

bool dist:: operator >(dist d2)
{ float t1, t2;
t1= feet + inches/12.0;
t2= d2.feet + d2.inches/12.0;
return (t1>t2)? true : false;
}
bool dist:: operator==(dist d2){
  if(feet == d2.feet && inches == d2.inches)
    return true;
  else
    return false;
}
int main()
{
dist d1(5,7), d2(7,11), d3(5,7),d4;
cout<<"\ngreater than operator over loading\n";
if (d1 > d2)
  cout<<"dist1 is more \n";
else
  cout<<"dist1 is less than dist2 \n";

  cout<<"\nequal to operator over loading\n";
if (d1 == d3)
  cout<<"equal \n";
else
  cout<<"unequal \n";
  cout<<"\n\nplus operator overloading to add 2 objects\n";
 d4=d2+d3;
 d4.display();

}