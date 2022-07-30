//C++ program for finding armstrong number//
#include<iostream>
using namespace std;
int main() 
{
	int num, onum,rem,result=0;
	cout<<"Enter a number:"; cin>>num;
	onum=num;
	
	while (onum !=0)
	{
		rem=onum%10; //Remainder of last digit
		result += rem * rem * rem; //Remove last no from onum
		onum /=10;
	}
	
	if(result==num)
		cout<<num<<" is an Armstrong number";
	else
		cout<<num<<" is not an Armstrong number";
	return 0;	
}
