#include<iostream>
using namespace std;
class Add
	{
	int x=0,y=0;
	public:
		Add(){}
		void Get()
		{
		cout<<"Enter 2 numbers:";
		cin>>x>>y;
		}
		
		int Display()
		{
		return x+y;
		}
	};
int main()
{
Add O1;
O1.Get();
int x;
x=O1.Display();
cout<<"The sum of 2 numbers is "<<x<<endl;

return 0;
}
