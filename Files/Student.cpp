#include<iostream>
#include<fstream>
class Student
{ int r;char name [20];
public:
void get()
	{
		cout<<"Enter name:";cin>>name;
		cout<<"Enter regno:";
int main()
{
Student s1;
ofstream o1("file1.dat",ios::binary);
for(int i=0;i<10;i++)
{
s1.get();
o1.write(char*(&s1),sizeof(s1));
}
