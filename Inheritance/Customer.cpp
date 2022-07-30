#include<iostream>
#include<iomanip>
using namespace std;
class customer
{
	protected:
		string name;
		long long int pno;
	public:
		customer(string n,long long int pno)
		{
			name = n;
			pno = pno;
		}
		customer(){}
};
class item
{
	protected:
		int quantity;
		string item_name;
		float price,total;
	public:
		item(string i_n,float p,int q)
		{
			item_name = i_n;
			price = p;
			quantity = q;
			total = p*q;
		}
		item(){}
};
class bill:public customer,public item
{
	private:
		int n;
	public:
		int number()
		{
			cout << "Enter the number of items: ";
			cin >> n;
			return n;
		}
		bill(string i_n,float p,int q):item(i_n,p,q)
		{
		}
		bill(string n,long long int p)
		{
			name = n;
			pno = p;
		}
		void display(bill b[],int n)
		{
			int s = 0;
			cout << "Customer name: " << name << endl;
			cout << "Customer phone number: " << pno << endl;
			cout << setfill('*') << setw(25) << "Bill" << setiosflags(ios::left) << setfill('*') << setw(21) << "*" << endl;
			cout << "Item\t\tPrice\tQuantity\tAmount" << endl;
			cout << setfill('*') << setw(46) << "*"<<endl;
			for (int i = 0;i < n;i++)
			{
				cout << setfill(' ') << setw(19) << b[i].item_name << setw(11) << b[i].price << setw(13) << b[i].quantity << setw(18) << b[i].total << endl;
				s = s+b[i].total;
			}
			cout << setfill('*') << setw(46) << "*" << endl;
			cout << setiosflags(ios::right) << setfill(' ') << setw(42)<< "Total amount to be paid: " << s << endl;
			cout << setfill('*') << setw(46) << "*" << endl;
		}
		bill():customer(),item(){}
};
int main()
{
	bill b1,b[10];
	int n1 = b1.number();
	string n,in;
	float price;
	long long int pno;
	int q;
	cout << "Enter the customer name: "; 
	cin >> n;
	cout << "Enter the phone number: ";
	cin >> pno;
	b1 = bill(n,pno);
	for (int i = 0;i < n1;i++)
	{
		cout << "Enter the item name: ";
		cin >> in;
		cout << "Enter the price: ";
		cin >> price;
		cout << "Enter the quantity: ";
		cin >> q;
		b[i] = bill(in,price,q);
	}
	b1.display(b,n1);
}
