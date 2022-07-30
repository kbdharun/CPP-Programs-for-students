//C++ program for performing basic arithmetic operation using switch case//
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,choice;
	cout << "Enter the value of a :";
	cin>>a;
	cout<<"Enter the value of b :";
	cin>>b;
	cout<<"\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n Enter your choice :";
	cin>>choice;
	switch(choice)
	do
	{
		case 1:
			{
				c =a+b;
				cout << "Addition of the given numbers \n ";
				cout << c;
				return 0;
			}
		case 2:
			{
				c=a-b;
				cout << "The Subtraction of given numbers \n";
				cout << c;
				return 0;
			}
		case 3:
			{
				c=a*b;
				cout << "The multiplication of given numbers is \n";
				cout << c;
				return 0;
			}
		case 4:
			{
				c=a/b;
				cout << "The Division of given numbers is \n";
				cout << c;
				return 0;
			}
			
	}
	while (!0);
}
