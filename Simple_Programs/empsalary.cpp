//C++ Program to calculate employee salary//
#include<iostream>
using namespace std;
int main()
{
	float basic_sal,gross_sal,HRA,TA;
	cout<<"Enter basic salary of Employee :";
	cin>>basic_sal;
	
	{
		HRA=0.1*basic_sal;
		TA=0.05*basic_sal;
	}
	
	gross_sal=basic_sal+HRA+TA;
	cout<<"Gross salary of Employee is :"<<gross_sal;
	
	return 0;
}
