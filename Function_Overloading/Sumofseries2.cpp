/*Create a function to calculate the sum of the given series x+x2+x3+x4+. . . + xn
, by
receiving X and N (5 as default for N) values as arguments. Overloaded this function for
X as int,float and N as float type. In main( ) demonstrate this function overloading with
and without using default argument.*/

#include<iostream>
#include<cmath>
using namespace std;
void series(int x,float n = 5)
{
	int s = 0;
	for (int i = 1;i <= n;i++)
	{
		s += pow(x,i);
	}
	cout << "sum of the series is " << s << endl;
}
void series(float x,float n = 5)
{
	float s = 0;
	for (int i = 1;i <= n;i++)
	{
		s += pow(x,i);
	}
	cout << "sum of the series is " << s << endl;
}
int main()
{
	int x;
	float x1,n;
	cout << "Enter the integer value for x: ";
	cin >> x;
	cout << "Enter the value for n: ";
	cin >> n;
	cout << "Enter the float value for x: ";
	cin >> x1;
	cout << "The sum of series with the default argument: ";
	series(x);
	cout << "The sum of series with the default argument: ";
	series(x1);
	cout << "The sum of series with given arguments: ";
	series(x,n);
	cout << "The sum of series with given arguments: ";
	series(x1,n);
}
