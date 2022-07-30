//Sample program using cout.fill in manipulators//
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char x=cout.fill('*');
	cout<<setw(10)<<123;
	cout<<"the fill character is"<<x<<"hai"<<endl;
	x=cout.fill('x');
	cout<<setw(10)<,456;
	cout<<"the previous fill char is"<<x<<"hai"<<endl;
	x=cout.fill('')
	
	return 0
}
