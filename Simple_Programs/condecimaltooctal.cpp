/*Write a c++ program to convert decimal to octal using functions.*/

#include<iostream>
using namespace std;
int main()
{
	int decimal,octal = 0,r,i = 1;
	cout << "Enter the decimal number: ";
	cin >> decimal;
	while(decimal!=0)
	{
		r = decimal%8;
		octal += r*i;
		decimal /= 8;
		i *= 10;
	}
	cout << "The octal number is " << octal<<endl;
}
