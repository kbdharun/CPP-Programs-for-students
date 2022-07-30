//C++ program for swapping 2 numbers//
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout << "Enter the value of a :";
	cin>>a;
	cout<<"\n Enter the value of b :";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout <<"\n After Swapping a="; cout<<a;
	cout <<"\n After Swapping b="; cout <<b;
	return 0;
}
