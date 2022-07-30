#include<iostream>
using namespace std;
class number
{
	int n;
	public: 
		number()
		{
			n = 0;
		}
		number(int nu)
		{
			n = nu;
		}
		number(class digit);
		~number(){}
		void display()
		{
			cout << n;
		}
		int gn()
		{
			return n;
		}
};
class digit
{
	int d;
	public:
		digit()
		{
			d = 0;
		}
		digit(int di)
		{
			d = di;
		}
		digit(number n)
		{
			d = n.gn();
		}
		~digit(){}
		void display()
		{
			cout << d;
		}
		int dn()
		{
			return d;
		}
};
number::number(digit d)
{
	n = d.dn();
} 
int main()
{
	number num(10),num1;
	digit dig(2),dig1;
	dig1 = num;
	num1 = dig;
	dig1.display();
	cout << "\n";
	num1.display();
}
