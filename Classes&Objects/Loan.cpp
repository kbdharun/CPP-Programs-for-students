/*Create a class “Loan”, include custno, custname, loan_type (P-Personal Loan, H-
Housing Loan), and amount. Create one method for calculating personal loan, one
method for housing loan, and one more method for displaying the customer details
including the loan amount (loan amount = amount+ interest). The loan interest is
calculated as follows

a. Personal Loan – 15% of the amount
b. Housing loan – 8% of the amount*/

#include<iostream>
using namespace std;
class Loan
{
	int custno;
	float amount,loan;
	string custname;
	char loan_type;
	public:
		Loan()
		{
			cout << "Enter the name of the customer: ";
			cin >> custname;
			cout << "Enter the customer number: ";
			cin >> custno;
			cout << "p for Personal loan\nh for Housing loan \nEnter the loan type: ";
			cin >> loan_type;
			if (loan_type == 'p')
			{
				p_loan();
			}
			else if(loan_type == 'h')
			{
				h_loan();
			}
			else
			{
				cout << "Invalid input" << endl;
			}
		}
		void p_loan()
		{
			cout << "Enter the amount: ";
			cin >> amount;
			loan = amount + 0.15*amount;
		}
		void h_loan()
		{
			cout << "Enter the amount: ";
			cin >> amount;
			loan = amount + 0.08*amount;
		}
		void display()
		{
			cout << "Customer Name: " << custname << endl;
			cout << "Customer number: " << custno << endl;
			cout << "Loan type: " << loan_type << endl;
			cout << "Loan amount: " << loan << endl;
		}	
};
int main()
{
	Loan l;
	l.display();
}
