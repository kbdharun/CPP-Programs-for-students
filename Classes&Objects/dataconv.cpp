//Data Conversion Program using constructors
#include<iostream>
using namespace std;
class Value;
class Num
	{
	int x;
	float y;
	public:
	int getx1()
	{return x;
	}
	int gety1()
	{return y;
	}

		Num(Value o5);
		Num(int p1,int p2)
		{
		x=p1;
		y=p2;
		}
		Num()
		{}
		void put()
		{
			cout<<x<<y;
		}
	};
class Value
{
int x1;
int y1;
public:
int getx1()
{ return x1;
}
int gety1()
{return y1;
}
void get()
	{
	cin>>x1>>y1;
	}
Value()
{
}		
};
Num::Num(Value o5)
		{
		x=o5.getx1();
		y=o5.gety1();
		};
int main()
{
Value o2;
o2.get();
Num o1=o2; 
o1.put();
}
