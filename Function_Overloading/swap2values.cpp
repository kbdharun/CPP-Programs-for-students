//C++ Program to swap 2 values using function overloading//
#include<iostream>
using namespace std;
class Check
{
public:
//swap function with int type arguments
void swap(int x,int y)
{
cout<<"\nBefore swapping integer values\nValue 1 = "<<x<<"\nValue 2 = "<<y;
int temp;
temp=x;
x=y;
y=temp;
cout<<"\nAfter swapping integer values\nValue 1 = "<<x<<"\nValue 2 = "<<y;
}
//swap function with char type arguments
void swap(char x,char y)
{
cout<<"\nBefore swapping character values\nValue 1 = "<<x<<"\nValue 2 = "<<y;
char temp;
temp=x;
x=y;
y=temp;
cout<<"\nAfter swapping character values\nValue 1 = "<<x<<"\nValue 2 = "<<y;
}
//swap function with string type arguments
void swap(string x, string y)
{
cout<<"\nBefore swapping string values\nValue 1 = "<<x<<"\nValue 2 = "<<y;
string temp;
temp=x;
x=y;
y=temp;
cout<<"\nAfter swapping string values\nValue 1 = "<<x<<"\nValue 2 = "<<y<<endl;
}
};
int main()
{
Check ch;
//calling int type arguments swap function
ch.swap(10,20);
//calling char type arguments swap function
ch.swap('A','B');
//calling string type arguments swap function
ch.swap("Hello","there");
}
