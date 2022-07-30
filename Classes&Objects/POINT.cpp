/*Create a class called POINT with two data members X and Y. include the following
member function in POINT class 
(i) READ() member function gets the input for X and Y from the user.
(ii) DISPLAY( ) member function is used to print X and Y values.
(iii) FIND_DISTANCE() overloaded member functions to find the distance
between
a. Invoking object and the origin.
b. Invoking object and another POINT values(X-coordinate and Y-coordinate
as the parameters).

In main() declare an object for the POINT class and calculate distances for that object.*/

#include<iostream>
#include<math.h>
using namespace std;
class POINT
{
	int x,y;
	public:
		void read()
		{
			cout << "Enter x and y coordinates: ";
			cin >> x >> y;
		}
		void display()
		{
			cout << "The coordinate is " << x << "," << y << endl;
		}
		void find_distance(POINT p)
		{
			cout << "The distance is " << pow((p.x*p.x)+(p.y*p.y),0.5) << endl;
		}
		void find_distance(POINT p,int x,int y)
		{
			cout << "The distance is " << pow(((p.x-x)*(p.x-x))+((p.y-y)*(p.y-y)),0.5) << endl;
		}
};
int main()
{
	POINT p,p1;
	p.read();
	p1.read();
	p.display();
	p1.display();
	p.find_distance(p);
	p.find_distance(p1,3,4);
}
