//C++ Program to find whether a given year is leap or not//

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a year :"; cin>>year;
	cout<<"\nChecking for leap year \n";
	
	if(year%400==0){
		cout<<year<<" is a leap year";
	}
	
	else if(year % 100==0){
		cout<<year<<" is a leap year";
	}
	else if(year % 4==0){
		cout<<year<<" is a leap year";
	}
	else{
		cout<<year<<" is not a leap year";
	}
	return 0;
}
