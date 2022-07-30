//C++ program for finding reverse of a number//
#include<iostream>
using namespace std;
int main()
{
	int n,rev_num=0,rem;
	cout<< "Enter an integer:"; cin>>n;
	
	while(n!=0)
	{
		rem = n % 10;
		rev_num=rev_num*10+rem;
		n/=10;
	}

	cout<<"Reversed Number=" <<rev_num;
	return 0;
}
