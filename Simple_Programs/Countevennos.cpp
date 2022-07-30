//C++ program to count even numbers between 1-200 and print sum //
#include<iostream>
using namespace std;
int main()
{
	int count,sum=0,n,i;
	cout<<"Enter limit:";cin>>n;
	for(i=0;i<=200;i++)
	{
		if(i%2==0)
		{
			sum+=i;
			count++;
		}
		else
		continue;
	}
	cout<<"Number of even numbers between the range is :"<<count<<"\n"<<endl;
	cout<<"Sum of all the even numbers is :" <<sum;
	return 0;
}
