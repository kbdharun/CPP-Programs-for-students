#include<iostream>
using namespace std;
int main()
{
	int x1=10,x2=20,m=2;
	bool b1,b2;
	b1=x1==x2; //false
	b2=x1 < x2; //true
	cout<< "b1 is ="<<b1<<"\n";
	cout<< "b2 is ="<<b2<<"\n";
	bool b3=true;
	if(b3)
		cout<<"Yes"<<"\n";
	else
		cout<<"No"<<"\n";
		
	int x3=false + 5 * m -b3;
	cout << x3;
	return 0;
}

