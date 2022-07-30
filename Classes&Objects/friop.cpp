/*C++ Program for forward declaration of class using friend operator*/

#include<iostream>
using namespace std;
class Transaction;
class Customer
{
	friend void applyTransaction(Customer, Transaction);
	private:
	int custNum;
	double balanceDue;
	public:
	Customer(int = 0, double = 0.0);
};
Customer::Customer(int num, double balance)
{
	custNum = num;
	balanceDue = balance;
}
class Transaction
{
	friend void applyTransaction(Customer, Transaction);
	private:
		int transactionNum;
		int custNum;
		double amount;
	public:
		Transaction(int = 0, int = 0, double = 0.0);
};
Transaction::Transaction(int trans, int cust, double amt)
{
	transactionNum = trans;
	custNum = cust;
	amount = amt;
}
void applyTransaction(Customer cust, Transaction trans)
{
	cout << "Customer #" << cust.custNum <<
	" original balance of $" <<
	cust.balanceDue << endl;
	cust.balanceDue += trans.amount;
	cout << "After transaction #" <<
	trans.transactionNum << " for " <<
	trans.amount << " the new balance is $" <<
	cust.balanceDue << endl;
}
int main()
{
	Transaction oneTrans(111, 888, -150.00);
	Customer oneCust(888, 200.00);
	applyTransaction(oneCust, oneTrans);
	return 0;
}
