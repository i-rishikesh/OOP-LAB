/*WAP to find sort and integer array and a float  array,usinng function template */

#include<iostream>
using namespace std;
#define N 5

template <class T>
void sort(T a[], int size){
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (a[i] > a[j])
			{
				T temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	int int_array[N];
	float float_array[N];
	cout<<"Entner integer array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>int_array[i];
	}
	cout<<"Entner floating array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>float_array[i];
	}
	sort(int_array,N);
	sort(float_array, N);
	cout<<"After sorting they are :"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<int_array[i]<<", ";
	}
	cout<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<float_array[i]<<", ";
	}
	return 0;
}

