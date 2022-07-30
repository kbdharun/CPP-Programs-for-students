#include<iostream>
#include<math.h>
using namespace std;
class shape
{
        public:
	virtual void display()= 0;
	virtual void get() = 0;
	virtual void area() = 0;
};
class square:public shape
{
	int s,a;
	public:
	void get()
	{
		cout<<"Enter side length of square:";
		cin >> s;
	}
	void area()
	{
		a = s*s;
	}
	void display()
	{
		cout <<"Area of square is "<< a << endl;
	}
};
class rectangle:public shape
{
	int b,h,a;
	public:
	void get()
	{
	        cout<<"Enter the dimensions of rectangle:";
		cin >> b >> h;
	}
	void area()
	{
		a = b*h;
	}
	void display()
	{
		cout <<"Area of rectangle is "<< a << endl;
	}
};
class triangle:public shape
{
	int a1,b1,c1,a,s;
	public:
	void get()
	{
	        cout<<"Enter dimensions of triangle:";
		cin >> a1 >> b1 >> c1;
	}
	void area()
	{
		s = (a1+b1+c1)/2;
		a = sqrt(s*(s-a1)*(s-b1)*(s-c1));
	}
	void display()
	{
		cout <<"Area of triangle is "<< a << endl;
	}
};
int main()
{
	shape *s[3];
	s[0] = new square;
	s[1] = new rectangle;
	s[2] = new triangle;
	for(int i = 0;i < 3;i++)
	{
		s[i]->get();
		s[i]->area();
		s[i]->display();
	}
}
