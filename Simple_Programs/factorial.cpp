//C++ program for finding factorial of a number//
#include<iostream>
using namespace std;
int main() 
{
	int n;
	long double factorial=1.0;
	
	cout<<"Enter a positive integer:"; cin>>n;
	
		if(n<0)
			cout << "Factorial doesn't exist for negative number";
		else
		{
			for(int i=1;i<=n;++i)
			{
				factorial *=i;
			}
		cout<<"Factorial of the given number" << n << "=" << factorial;
		}
		return 0;
}
