/*
Create a class called ‘Book’ with book name (bname) and book id(bid) as data members
and setdata() and showdata() as member functions. setdata() function set the values of
the objects and showdata() function display the values of the objects. Create 5 objects
and call the setdata() function to set ‘bname’ and ‘bid’ for all five objects. Write
appropriate logic to search a book by its ‘bid’, if ‘bid’ is present in the list of objects
then print the ‘bname’ and ‘bid’ of the object using showdata() function else display
‘Book is not found’ message in the output screen.*/

#include<iostream>
using namespace std;
class book
{
	string bname;
	long int bid;
	public:
		void setdata(string b_name,long int b_id)
		{
			bname = b_name;
			bid = b_id;
		}
		void showdata()
		{
			cout << "Name of the book: " << bname << endl;
			cout << "Book id: " << bid << endl;
		}
		bool searchdata(long int e)
		{
			if (e == bid)
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
	string bn;
	int f = 0;
	long int bi;
	long int e;
	book b[5];
	for (int i = 0;i < 5;i++)
	{
		cout << "Enter the name: ";
		cin >> bn;
		cout << "Enter the bookid: ";
		cin >> bi;
		b[i].setdata(bn,bi);
	}
	cout << "Enter the book id to be searched: ";
	cin >> e;
	for (int i = 0;i < 5;i++)
	{
		if (b[i].searchdata(e) == 1)
		{
			b[i].showdata();
			f = 1;
		}	
	}
	if (f == 0)
	{
		cout << "Book is not found.";
	}
}

