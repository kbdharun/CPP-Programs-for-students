/*Write a CPP program to declare a function name checkabundant() , get a value 'n'
from the user, and pass it to the function checkabundant(). Print all the abundant
numbers ranging from 1 to n.
Note: For example,12 is an abundant Number: divisors for 12 is 1,2,3,4,6
sum of divisors is 16 which is greater than the original number.*/

#include<iostream>
using namespace std;
void checkabundant(int n)
{
	int s = 0,l = 0,j = 0;
	while (j <= n)
	{
		s = 0;
		for (int i = 1;i < j;i++)
		{
			if (j % i == 0 )
			{
				s += i;
			}
		}
		if (j < s)
		{
			cout << j << " is an abundant number." << endl;
			cout << "The abundance of the number is " << s-j << endl;
		}
		j++;
	}
}
int main()
{
	int n;
	cout << "Enter the number: ";
	cin >> n;
	checkabundant(n);
}
