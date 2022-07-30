//C++ Program to find maximum value of element by passing array//
#include <iostream>
using namespace std;
int max(int a);
int main()
{
int a[10],i,m;
cout<<"Enter values";
for(i=0;i<10;i++)
{
cin>>a[i];}
cout<<"The maxm value is"<<max(a[10]);
}

int max(int a[10])
{
int i,maxi;
for(i=0;i<=10;i++)
{
if(maxi<=a[i])
maxi=a[i];
}
return maxi;
}

