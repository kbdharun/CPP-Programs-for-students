//C++ Program to prepare grocery bill//
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*Declaration and basic input*/
	int i,n,price[30],amount[30],totalamt,quantity[30];
	char item[2][30];
	cout<<"Enter the number of items";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cout<<"Enter the item"<<endl;
		scanf("%s",item[i]);
		cout<<"Enter the quantity"<<endl;
		cin>>quantity[i];
		cout<<"Enter the MRP"<<endl;
		cin>>price[i];
		cout<<"Enter the Amount"<<endl;
		cin>>amount[i];
	}
	cout<<setfill('*')<<setw(20);
	/*Displating Bill*/
	cout<<"BILL";
	cout<<"********************"<<endl;
	cout<<"Item\t"<<"quantity\t"<<"Price\t"<<"amount"<<endl;
	cout<<"****************************************"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<setfill(' ')<<item[i]<<setw(10)<<quantity[i]<<setw(10)<<price[i]<<setw(20)<<amount[i]<<"\n"<<endl;
		totalamt+=amount[i];		
	}
	cout<<endl<<"Total amount to be paid:"<<totalamt;
	return 0;	
}
