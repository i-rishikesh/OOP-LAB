#include <iostream>
using namespace std;
class time{
  int hr,min;
  public:
  	time()
  	{}
	  
  time(int r, int i){
    hr=r;
    min=i;
  } 
 time operator+(time c3)
 	{
 		time c;
 		c.hr=hr+c3.hr;
 		c.min=min+c3.min;
 		return c;
	 }
  int operator==(time c1){
    if(hr == c1.hr && min == c1.min)
      return 1;
    else
    return 0;
  }
  void show()
		{
			cout<<hr<<","<<min;
		}
  	void operator = (time b)
	{
	hr=b.hr;
	min=b.min;
}
 
};
int main() {
  time c1(5,5),c2(5,5),c3(5,6),c4;
  cout<<"\nequal to operator over loading\n";
  if((c1==c2)==1)cout<<"True\n";
  else cout<<"False\n";
  if((c1==c3)==1)cout<<"True\n";
  else cout<<"False\n";
  cout<<"\n\nassignment operator overloading\n";
  c1=c3;
  c1.show();
  cout<<"\n\nplus operator overloading to add 2 objects\n";
 c4=c2+c3;
 c4.show();
}