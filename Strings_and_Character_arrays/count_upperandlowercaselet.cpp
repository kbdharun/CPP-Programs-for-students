//C++ program to read a character and count the no of upper case and lowercase letters//
#include<iostream>
using namespace std;
int main()
{
char ch;
int upper=0;
int lower=0;
int number=0;
int i;
cout<<("\nEnter any character, or * to quit :");
cin>>ch;
ch=getchar();
while (ch!='*')
{
if (ch>='a'&& ch<='z')
lower++;

if (ch>='A'&&ch<='Z')
upper++;

if (ch>='1'&&ch<='9')
number++;
}
cout<<("\nTotal count of lowercase characters entered=")<<lower;
cout<<("\nTotal count of uppercase characters entered=")<<upper;
cout<<("\nTotal count of digits entered")<<number;
}
