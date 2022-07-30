#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		string dept;
		long int regno;
	public:
		student(string n,string d,long int r)
		{
			regno = r;
			name = n;
			dept = d;
		}
		student(){}
};
class marks
{
	protected:
		int mark[5];
	public:
		marks(int m[])
		{
			for (int i = 0;i < 5;i++)
			{
				mark[i] = m[i];
			}
		}	
};
class details:public student,public marks
{
	public:
		details(string n,string d,long int r,int m[]):student(n,d,r),marks(m)
		{
		}
		void display()
		{
			cout << "Name of the student: " << name<<endl;
			cout << "Student register number: " << regno<<endl;
			cout << "Departement of the student: " << dept << endl;
			cout << "Marks of the student: " << endl;
			for(int i = 0;i < 5;i++)
			{
				cout << mark[i] << endl;
			}
		}
};
int main()
{
	int m[5];
	long int r;
	string n,d;
	cout << "Enter the register number: ";
	cin >> r;
	cout << "Enter the name: ";
	cin >> n;
	cout << "Enter the department: ";
	cin >> d;
	for (int i = 0;i < 5;i++)
	{
		cin >> m[i];
	}
	details d1(n,d,r,m);
	d1.display();
}
