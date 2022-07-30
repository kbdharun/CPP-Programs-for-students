//C++ Program to calculate area of rectangle using objects and class//
#include<iostream>
using namespace std;

	class area{
	public:
		int l,w,a;
		void input()
		{
			cout<<"Enter length of rectangle:";cin>>l;
			cout<<"Enter width of rectangle:";cin>>w;
		};
		void findarea(){
		a=l*w;
		};
		void display(){
		cout<<"Area of rectangle is "<<a<<endl;
		};
	};

int main()
	{
	area obj;
	obj.input();
	obj.findarea();
	obj.display();

	return 0;
	}
