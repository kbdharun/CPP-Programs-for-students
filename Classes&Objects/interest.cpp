/*Write a program to calculate simple interest. Suppose the customer is a
senior citizen. He is being offered a 12% Rate of Interest(ROI); for all
customers, the ROI is 10%. Write a function to calculate the interest
and pass the arguments by reference and also, use default arguments
to calculate the interest of the senior citizens.*/

#include<iostream>
using namespace std;
class Interest{
    int t;
    float p,r;
    double i;

	public:
	Interest(){}
	~Interest(){};
	void Get()
	{
	cout << "Enter the amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the years: ";
    cin >> t;
	}
	double interest(float amount, int time, const float rate = 12)
	{
	    int i = amount*rate*time;
	    return i;
	}
	void calc(){
	i = interest(p,t);
    cout << "Default interest: " << i;
    i = interest(p,t,r);
    cout <<endl<<"Interest:" << i<<endl;
	}
};
int main()
{
    Interest o1;
    o1.Get();
    o1.calc();   
}
