/*
Create four-functions to compute fractions. Here are the formulas for the four arithmetic
operations applied to fractions.

Addition:
a/b+c/d=(a*d+b*c)/b*d

Subtraction:
a/b+c/d=(a*d-b*c)/b*d

Multiplication:
a/b*c/d=(a*c)/(b*d)

Division:
a/b / c/d=(a*d)/(b*c)

The user has to choose the option either add or sub or mult or div. The program should
then display the result by calling the respective function and repeat this process until the
user given stop option.
*/

#include<iostream>
using namespace std;
float add(int a,int b,int c,int d)
{
	return (float)((a*d)+(b*c))/(b*d);
}
float sub(int a,int b,int c,int d)
{
	return (float)((a*d)-(b*c))/(b*d);
}
float mul(int a,int b,int c,int d)
{
	return (float)(a*c)/(b*d);
}
float div(int a,int b,int c,int d)
{
	return (float)(a*d)/(b*c);
}
int main()
{
	int a,b,c,d,ch;
	cout << "Press 1 to add\n      2 to subtract\n      3 to multiply\n      4 to divide\n      0 to exit"<<endl;
	cin>>ch;
	while (ch != 0)
	{
		cout << "Enter the four values: ";
		cin >> a >> b >> c >> d;
		if (ch == 1)
		{
			cout << "The addition is " << add(a,b,c,d);
		}
		else if(ch == 2)
		{
			cout << "The subtraction is " << sub(a,b,c,d);
		}
		else if(ch == 3)
		{
			cout << "The multiplication is " << mul(a,b,c,d);
		}
		else if(ch == 4)
		{
			cout << "The division is " << div(a,b,c,d);
		}
		else if (ch == 0)
		{
			break;
		}
		else
		{
			cout << "Invalid choice.\n";
		}
		cout << "\nEnter the choice: ";
		cin >> ch;
	}
}
