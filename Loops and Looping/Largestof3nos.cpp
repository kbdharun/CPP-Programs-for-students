//C++ program for finding largest of 3 numbers using looping//
#include<iostream>
using namespace std;
int main() 
{
	int n1,n2,n3;
	cout << "Enter n1 :"; cin >> n1;
	cout << "Enter n2 :"; cin >> n2;
	cout << "Enter n3:"; cin >> n3;
	
		if (n1>=n2 && n1>=n3)
		cout << "Largest number:" <<n1;
		
		if(n2>=n3 && n2>=n3)
		cout << "Largest number:" <<n2;
		
		if(n3>=n1 && n3>=n2)
		cout << "Largest number:" <<n3;
	return 0;
}

