/* Write FindandRemove (argument1 - array type, argument2) function to remove all occurrences
of argument2 in argument1. Define the functions for int and char data type (use overloading).
Write main function to test FindandRemove ( ) for overloading.
Eg) arg-1 is 1 3 4 5 3 arg-2 is 3
Output is 1 4 5
Arg-1 is abcdefe arg-2 is e
Output is abcd f */

#include<iostream>
#include<string.h>
using namespace std;
void FindandRemove(int a[],int b,int l)
{
	int k;
	for (int i = 0;i < l;i++)
	{
		if (a[i] == b)
		{
			k = i;
			for (int j = i;j < l;j++)
			{
				a[j] = a[j+1];
			}
			--l;
		}
	}
	for (int i = 0;i < l;i++)
	{
		cout << a[i] << endl;
	}
}
void FindandRemove(char a[],char b)
{
	int k,l = strlen(a);
	for (int i = 0;i <l;i++)
	{
		if (a[i] == b)
		{
			k = i;
			for (int j = i;j < l;j++)
			{
				a[j]= a[j+1];
			}
			--l;
		}
	}
	for (int i = 0;i < l;i++)
	{
		cout << a[i] << endl;
	}
}
int main()
{
	int b,n;
	char d;
	cout << "Enter the limit: ";
	cin >> n;
	int *a = new int(n);
	for (int i =0 ;i <n;i++)
	{
		cout << "enter the element: ";
		cin >> a[i];
	}
	cout << "Enter the element to be removed: ";
	cin >> b;
	FindandRemove(a,b,n);
	char *c = new char(n);
	cout << "Enter the string: ";
	cin >> c;
	cout << "Enter the character to be removed: ";
	cin >> d;
	FindandRemove(c,d);
}
