#include<iostream>
using namespace std;
class employee
{
	protected:
		string name,designation;
		long int id;
	public:
		employee(string n,string d,long int i)
		{
			name = n;
			designation = d;
			id = i;
		}
};
class salary
{
	protected:
		float s,hra,da,tax;
	public:
		salary(float sa)
		{
			s = sa;
		}
		float calculate(float sa)
		{
			if (sa >= 10000 && sa <= 100000)
			{
				hra = sa*0.02;
				da = 0.05*sa;
				tax = 0.1*sa;
				sa = sa+hra+da-tax;
				return sa;
			}
			if (sa > 100000 && sa <= 1000000)
			{
				hra = sa*0.05;
				da  = sa*0.1;
				tax = 0.2*sa;
				sa  = sa+hra+da-tax;
				return sa;
			}
		} 
};
class display:public employee,public salary
{
	public:
		display(string n,string d,long int i,float sa):employee(n,d,i),salary(sa){}
		void show()
		{
			cout << "Name: " << name << endl;
			cout << "Id: " << id << endl;
			cout << "Designation: " << designation << endl;
			cout << "Salary: " << calculate(s) << endl;
		}
};
int main()
{
	string n,d;
	long int i;
	float s;
	cout << "Enter the following details " << endl;
	cout << "Name: ";
	cin >> n;
	cout << "Id: ";
	cin >> i;
	cout << "Designation: ";
	cin >> d;
	cout << "Basic Salary: ";
	cin >> s;
	display d1(n,d,i,s);
	d1.show();
}
