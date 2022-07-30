/* Write a C++ program for calculating the perimeter of the shapes square, rectangle,
triangle and trapezoid using overloading of functions. If the necessary arguments are not
passed during the function call, let the functions get executed with default arguments.
(fix any default values)*/

#include<iostream>
#include<math.h>
using namespace std;
int area(float a = 1)
{
	return a*a;
}
int area(int l,int b = 1)
{
	return l*b;
}
float area(int a,float b,int c = 5)
{
	int s = (a+b+c)/2;
	return pow((s*(s-a)*(s-b)*(s-c)),0.5);
}
float area(float a,float b,int h = 1.0)
{
	return 0.5*(a+b)*h;
}
int main()
{
	int a,l,b,c,h;
	float b1,a1;
	cout << "Default area of square is " << area() << endl;
	cout << "Enter the side of the square: ";
	cin >> a1;
	cout << "Area of the square is " << area(a1) << endl;
	cout << "Enter the dimensions of rectangle: ";
	cin >> l >> b;
	cout << "Default area of the rectangle is " << area(l) << endl;
	cout << "Area of the rectangle is " << area(l,b) << endl;
	cout << "Enter the sides of the triangle: ";
	cin >> a >> b1 >> c;
	cout << "Default area of the triangle is " << area(a,b1) << endl;
	cout << "Area of the triangle is " << area(a,b1,c) << endl;
	cout << "Enter the dimensions of trapezoid: ";
	cin >> a1 >> b1 >> h;
	cout << "Default area of the trapezoid is " << area(a1,b1) << endl;
	cout << "Area of the trapezoid is " << area(a1,b1,h)<<endl; 
}
