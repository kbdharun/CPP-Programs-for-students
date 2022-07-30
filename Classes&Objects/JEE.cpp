/*Create a class student and declare the functions called getstudent() to get the student
details (name, applicationno, four subject
marks(maths,physics,chemistry,biology/computer science) and getscore() to get the
JEE main score, check() to find the eligibility (subjects marks>60%) for engineering
admission, total() to calculate the combined score (XII score + JEE main score) and
average() to calculate combined score class average.*/

#include<iostream>
using namespace std;
class student
{
	string name;
	int appno,marks[4],score,s,a;
	public:
		void getstudent()
		{
			cout << "Enter the following details." << endl;
			cout << "Enter the name: ";
			cin >> name;
			cout << "Enter the application number: ";
			cin >> appno;
			for (int i = 0;i < 4;i++)
			{
				cout << "Enter the marks: ";
				cin >> marks[i];
			}
		}
		void getscore()
		{
			cout << "Enter the jee percetile: ";
			cin >> score;
		}
		void check()
		{
			int f = 0;
			for (int i = 0;i < 4;i++)
			{
				if (marks[i] < 60)
				{
					f = 1;
					cout << "Not eligible." << endl;
					break;
				}
			}
			if (f == 0)
			{
				cout << "Eligible" << endl;
			}
		}
		void total()
		{
			s = 0;
			for (int i = 0;i < 4;i++)
			{
				s += marks[i];
			}
			s = s+score;
			cout << "The total is " << s << endl;
		}
		void average()
		{
			a = s/5;
			cout << "The average is " << a << endl;
		}
};
int main()
{
	student study;
	study.getstudent();
	study.getscore();
	study.check();
	study.total();
	study.average();
}
