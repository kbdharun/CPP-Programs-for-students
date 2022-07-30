#include<iostream>
using namespace std;
void input(int&,char*,float&);
void disp(int&,char*,float&);
void debit(float&);
void credit(float&);
int main()
{
	int ac_no;
	char name[10],choice;
	float balance;
	int option;
	do
	{
		cout<<"Enter a option\n";
		cout<<"1.Create account\n"
		<<"2.Credit\n"
		<<"3.Debit\n"
		<<"4.Display\n";
		cin>>option;
		switch(option)
		{
			case 1:input(ac_no,name,balance);break;
			case 2:credit(balance);break;
			case 3:debit(balance);break;
			case 4:disp(ac_no,name,balance);break;
			default: break;
		}
		cout<<"Do you want to continue(y/n)\n";
		cin>>choice;
	}while(choice!='n');
	
	
//	cout<<"balance in main"<<balance; 
}
void input(int &acno,char *n,float &bal)
{
	cout<<"Enter acc_no,name and Balance"<<endl;
	cin>>acno>>n>>bal;
}
void credit(float &bal)
{
	float amt;
	cout<<"Enter the amount to credit\n";
	cin>>amt;
	bal=bal+amt;
}
void debit(float &bal)
{
	float amt;
	cout<<"Enter the amount to credit\n";
	cin>>amt;
	bal=bal-amt;
}
void disp(int &acno,char *n,float& bal)
{
//	bal+=500;
//	cout<<"Enter acc_no,name and balance"<<endl;
	cout<<"Account no is "<<acno<<"; Name is "<<n<<";  Balance is "<<bal<<"\n";
}
