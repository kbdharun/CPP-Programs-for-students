//Conversion of polar array to rectangle
#include<iostream>
#include<cmath>
class rectangle;
using namespace std;
class polar
{
	float r,a;
	public:
		polar()
		{
			r = 0.0;
			a = 0.0;
		}
		void get()
		{
			cout << "Enter the radius: ";
			cin >> r;
			cout << "Enter the angle: ";
			cin >> a;
		}
		polar(float ra,float an)
		{
			r = ra;
			a = an;
		}	
		void display()
		{
			cout << "The polar coordinate is " << r << "<" << a << endl;
		}
		operator rectangle();
};
class rectangle
{
	float a,b;
	public:
		rectangle(float a1,float b1)
		{
			a = a1;
			b = b1;
		}
		rectangle()
		{
		}
		void get()
		{
			cout << "Enter the real part: ";
			cin >> a;
			cout << "Enter the imaginary part: ";
			cin >> b;
		}
		rectangle operator +(rectangle c)
		{
			float a1 = a+c.a;
			float b1 = b+c.b;
			return rectangle(a1,b1);
		}
		operator polar()
		{
			float r = sqrt(a*a+b*b);
			float an = atan(b/a);
			return polar(r,an);
		}
		void display()
		{
			cout << "The rectangle coordinate is " << a << "+ i" << b << endl;
		}
};
polar::operator rectangle()
{
	float a1 = r*cos(a);
	float a2 = r*sin(a);
	return rectangle(a1,a2);
}
int main()
{
	polar p1,p2;
	p1.get();
	p2.get();
	rectangle r1 = p1;
	r1.display();
	rectangle r2 = p2;
	r2.display();
	rectangle r3 = r1+r2;
	polar p3 = r3;
	p3.display();
}
