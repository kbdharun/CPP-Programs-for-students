/*Write a C++ program to implement the Supermarket Billing Management system.
Create a class “SuperMall” with data members like item code, price of items and
item_name. Add a member function called “insert” which reads the item details and
the user must feed the quantity in which he wants a product. Define a member
function called calculate which prints the final bill information.*/

#include<iostream>
#include<iomanip>
using namespace std;
class SuperMall
{
	long int item_code;
	int quantity;
	float price;
	string item_name;
	public:
		void insert()
		{
			cout << "Enter the following details: ";
			cout << "Enter the item name: ";
			cin >> item_name;
			cout << "Enter the item code: ";
			cin >> item_code;
			cout << "Enter the price: ";
			cin >> price;
			cout << "Enter the quantity: ";
			cin >> quantity;
		}
		void calculate(int n)
		{
			int s = 0;
			SuperMall b[n];
			for (int i = 0;i < n;i++)
			{
				b[i].insert();
			}
			cout << setfill('*') << setw(29) << "Bill" << setiosflags(ios::left) << setfill('*') << setw(25) << "*" << endl;
			cout << "Item\t\t  Code\tPrice\tQuantity\tAmount" << endl;
			cout << setfill('*') << setw(54) << "*"<<endl;
			for (int i = 0;i < n;i++)
			{
				cout << setfill(' ') << setw(19) << b[i].item_name << setw(8) << b[i].item_code << setw(11) << b[i].price << setw(13) << b[i].quantity << setw(18) << b[i].price*b[i].quantity << endl;
				s = s+(b[i].price*b[i].quantity);
			}
			cout << setfill('*') << setw(54) << "*" << endl;
			cout << setiosflags(ios::right) << setfill(' ') << setw(50)<< "Total amount to be paid: " << s << endl;
			cout << setfill('*') << setw(54) << "*" << endl;
		}
};
int main()
{
	SuperMall b;
	int n;
	cout << "Enter the limit: ";
	cin >> n;
	b.calculate(n);
}
