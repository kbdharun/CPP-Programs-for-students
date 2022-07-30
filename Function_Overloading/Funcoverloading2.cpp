/* 
Write a program in C++ that has two functions with the same name in the source
program (sample.cpp). The function name is division, and it accepts two
parameters. Divide the parameters-based values and return the result. The first
function overload is of type int and has two parameters of type int itself. The
second function overload is of type double and accepts two parameters of type
double. Invoke the appropriate overloading function in main function. First,
supply the integer arguments and then the double arguments for testing. Give the
output with the necessary documentation.*/
#include<iostream>
using namespace std;
int division(int a,int b)
{
	if (a==0 || b==0)
	{
		cout << "Invalid input" << endl;
		cout << "Enter the values again: ";
		cin >> a >> b;
		division(a,b);
	}
	else
	{
		return a/b;
	}
}
double division(double a,double b)
{
	if (a == 0 || b == 0)
	{
		cout << "Invalid input" << endl;
		cout << "Enter the values again: ";
		cin >> a >> b;
		division(a,b);
	}
	else
	{
		return a/b;
	}
}
main()
{
	int a,b;
	double c,d;
	cout << "Enter the two values in integer: ";
	cin >> a >> b;
	cout << "Enter the two values in float: ";
	cin >> c >> d;
	cout << "The result is " << division(a,b) << endl;
	cout << "The result is " << division(c,d) << endl;
}
