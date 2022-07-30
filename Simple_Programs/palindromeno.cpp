//C++ program for checking palindrome number//
#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	
	cout<<"Enter number:";
	cin>>num;
	
	n=num;
	
	do
	{
		digit=(num%10);
		rev=(rev*10)+digit;
		num=num/10;
	}while(num!=0);
	
	cout<<"The reverse of the number is:"<<rev;
	
	if(n==rev)
		cout<<"\n The number is palindrome";
	else
		cout<<"\n The number is not a palindrome";
		
	return 0;
}
