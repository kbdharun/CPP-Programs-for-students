/* 
Write a program to calculate simple interest using function. The
function should accept the principle amount, interest rate and
number of years as parameters and return the total amount.
Default value for the interest rate is 7.5%. Demonstrate the
simple interest calculation (with and without using default
value).*/

#include<iostream>
using namespace std;
double interest(float amount, int time, float rate = 0.075)
{
    int i = amount*rate*time;
    return i;
}
int main()
{
    int t;
    float p,r;
    double i;
    cout << "Enter the amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the years: ";
    cin >> t;
    i = interest(p,t);
    cout << "Default interest: " << i;
    i = interest(p,t,r);
    cout <<endl<<"Interest:" << i<<endl;
}
