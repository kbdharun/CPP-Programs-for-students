/* Write a C++ program to print reverse digits of a given number, count the total number of digits and sum of digits of a number using functions. Ask choice (1.reverse digit, 2.digit
count, 3.sum of digits) from the user. If the user enters a positive number, the program will ask the user to enter a choice, otherwise, the program will be closed.*/

#include<iostream>
using namespace std;
int reverse(int a)
{
	int r,s;
	while (a != 0)
	{
		r = a%10;
		s = (s*10)+r;
		a = a/10; 
	}
	return s;
}
int total(int a)
{
	int r,s;
	while (a != 0)
	{
		r = a%10;
		s += 1;
		a = a/10;
	}
	return s;
}
int sum(int a)
{
	int r,s;
	while (a != 0)
	{
		r = a%10;
		s += r;
		a = a/10;
	}
	return s;
}
int main()
{
	int choice,a;
	cout << "Enter a number: ";
	cin >> a;
	if (a < 0)
	{ 
		exit(0);
	}
	else
	{
		cout << "Press 1 to reverse\n      2 to count the number of digits\n      3 to sum of digits\n";
		cin >> choice;
		if (choice == 1)
		{
			cout << "The reversed number is " << reverse(a) << endl; 
		}
		else if (choice == 2)
		{
			cout << "Number of digits present in the given number is " << total(a) << endl; 
		}
		else if (choice == 3)
		{
			cout << "Sum of the digits is " << sum(a) << endl;
		}
		else
		{
			cout << "Invalid choice." << endl; 
		}
	}
}
