/*A common place to buy candy is from a machine. The machine sells candies, chips, gum, and cookies. You have been asked to write a program for this candy machine.
The program should do the following:
1. Show the customer the different products sold by the candy machine.
2. Let the customer make the selection.
3. Show the customer the cost of the item selected.
4. Accept money from the customer.
5. Release the item.*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class candy_machine
{
	string item[4];
	int price[4],ch;
	int amount;
	public:
		candy_machine()
		{
			item[0] = "Candy";
			item[1] = "Chips";
			item[2] = "Gum";
			item[3] = "Cookies";
			price[0] = 30;
			price[1] = 20;
			price[2] = 15;
			price[3] = 40;
		}
		void show_data()
		{
			cout << "ITEM" << setw(25) << "PRICE" << endl;
			for(int i = 0;i < 4;i++)
			{
				cout << item[i] << setw(25) << price[i] << endl;
			}
		}
		void select()
		{
			cout << "Enter your choice: ";
			cin >> ch;
		}
		void cost_item()
		{
			cout << "The selected item" << endl;
			cout << "ITEM" << setw(10) << "PRICE" << endl;
			cout << item[ch-1] << setw(7) << price[ch-1] << endl;
		}
		void checkamount(int amount) const
		{
			if (amount == price[ch-1])
			{
				cout << "The amount required is paid." << endl;
			}
			else if (amount > price[ch-1])
			{
				cout << "The amount required is paid." << endl;
				cout << "Take the remaining amount of Rs." << amount-price[ch-1]<<endl;
			}
			else
			{
				cout << "Required amount is not paid"<<endl;
			}
		}
		~candy_machine()
		{
		}
};
int main()
{
	candy_machine cm;
	int amount;
	cm.show_data();
	cm.select();
	cm.cost_item();
	cout << "Enter the amount to be paid: ";
	cin >> amount;
	cm.checkamount(amount);
}
