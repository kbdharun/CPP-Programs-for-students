/*Define a class to represent a bank account. Include the following members:
Data members:
1) Name of the customer
2) Account number
3) Type of account
4) Balance amount in the account.
Member functions:
1) Give values for the data members
2) Deposit an amount
3) Withdraw an amount after checking the balance
4) Display name and balance.
Write a menu-driven C++ program to test the class for options 1. deposit, 2. withdraw, and 3.
display. Repeat the process until the user enters "stop".*/

#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	char name[25],type[20];
	long int ac_no;
	float balance,amount;
	public:
		bank()
		{
			cout << "Enter the following details correctly." << endl;
			cout << "Enter the name: ";
			cin >> name;
			cout << "Enter the account number: ";
			cin >> ac_no;
			cout << "Enter the account type: ";
			cin >> type;
			cout << "Enter the balance: ";
			cin >> balance;
		}
		void deposit()
		{
			cout << "Enter the amount to be deposited: ";
			cin >> amount;
			balance += amount;
		}
		void withdraw()
		{
			cout << "Enter the amount to be withdrawn: ";
			cin >> amount;
			if (amount > balance)
			{
				cout << "Balance is insufficient.";
			}
			else
			{
				balance -= amount;
			}
		}
		void display()
		{
			cout << "Name of the customer: " << name << endl;
			cout << "Balance: " << balance;
		}
};
int main()
{
	bank b = bank();
	int choice;
	char s[5];
	while (strcmp(s,"stop") != 0)
	{
		cout << "Press 1 to deposit \n      2 to withdraw\n      3 to display"<<endl;
		cin >> choice;
		if (choice == 1)
		{
			b.deposit();
		}
		else if (choice == 2)
		{
			b.withdraw();
		}
		else if(choice == 3)
		{
			b.display();
		}
		else
		{
			cout << "Invalid choice.\n";
			continue;
		}
		cout << "\nDo you wish to continue? ";
		cin >> s;
	}
}
