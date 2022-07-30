//Sample C++ program using Setbase() manipulator//
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int num=10, num1=50;
	cout<<"Before set: \n"<<num<<endl;
	cout<<"Setting base to Octal"<<" using setbase: \n"<<setbase(8)<<num<<endl;
	cout<<"Setting base to hex"<<" using setbase: \n"<<setbase(16)<<num1<<endl;
	return 0;
}
