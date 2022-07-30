//C++ program for checking prime number//
#include <iostream>
using namespace std;
int main()
{
    /* variable definition and initialization */   
    int n, i, c = 0;
    /* Get user input */ cout << "Enter any number n: "; cin>>n;
    /*logic*/    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout << "It is a Prime number" << endl;
    }
    else
    {
         cout << "It is not a Prime number" << endl; 
    }
    return 0;    
}
