/*
Create a class and identify relevant attributes and behaviors for the following:
A university wants to collect students’ information for offering scholarships based on
their better academic performance.
The following methods are used:-
getDetail() - This method gets a student’s details as arguments from main function.
displayDetail() - used to display a student detail.
checkScholarship() – This method returns 1 (or) 0. One for “eligible” and zero
for “Not eligible” based on the student’s subjects marks, should be greater than
95% and attendance should be greater than 80%.*/

#include<iostream>
using namespace std;
class scholarship
{
	long int regno;
	char name[25];
	float percent,attendance;
	public:
		void getDetail()
		{
			cout << "Enter the following details." << endl;
			cout << "Enter the name of the student: ";
			cin >> name;
			cout << "Enter the register number: ";
			cin >> regno;
			cout << "Enter the percentage of the attendance: ";
			cin >> attendance;
			cout << "Enter the percentage of marks: ";
			cin >> percent;
		}
		void displayDetail()
		{
			cout << "Name : " << name << endl;
			cout << "Register number: " << regno << endl;
			cout << "Attendance: " << attendance << endl;
			cout << "Percentage of Marks: " << percent << endl;
		}
		bool checkScholarship()
		{
			if (percent > 95 && attendance > 80)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	scholarship student;
	student.getDetail();
	student.displayDetail();
	if (student.checkScholarship() == 1)
	{
		cout << "Eligible for scholarship."<<endl;
	}
	else
	{
		cout << "Not eligible for scholarship"<<endl;
	}
}
