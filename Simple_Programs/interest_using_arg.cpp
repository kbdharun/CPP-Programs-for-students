//Sample C++ Program to find interest using Default argument//
#include<iostream>
using namespace std;
void calculate(int , float=0.04);
int main()
{
	
	int principal;
	cout<<"Enter principal amount"<<endl;
	cin>>principal;
	calculate(principal);
}
void calculate(int p, float r)
{
	float emi=p+(p*r);
	cout<<"Amount to be paid(with interest):"<<emi;
}

