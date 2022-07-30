/*
Write a C++ program to find the area of a circle, square,
rectangle and triangle using the concept of objects and classes. */
#include<iostream>
#define pi 3.14
using namespace std;
class area
{
    int l,b,s;
    float r;
    public:
    area(int l,int b)
    {
        cout<<endl<<"The area of the rectangle is " <<l*b<<endl;
    }
    area (int s)
    {
        cout << "The area of the square is "<<s*s <<endl;
    }
    area(float r)
    {
        cout << "The area of the circle is " << pi*r*r << endl<<endl;
    }
};
int main()
{
    int a,b,s;
    float r;
    cout << "Enter the dimensions of the rectangle: ";
    cin >> a>>b;
    cout << "Enter the side of the square: ";
    cin >> s;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    area shape = area(a,b);
    area shape1 = area (s);
    area shape2 = area(r);
}
