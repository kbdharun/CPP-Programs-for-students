#include<iostream>
using namespace std;

class date
{
	int dd,mm,yy;
	
	void setDay()
	{
		if(dd>31)
		{
			dd=31;
		}
	}
	
	void setMonth()
	{
		if(mm>12)
		{
			mm=12;
		}
	}
	
	public:
		void setDate(int d, int m, int y)
		{
			dd=d;
			setDay();
			mm=m;
			setMonth();
			yy=y;
		}
		void showDate()
		{
			cout<<"\nDate: "<<dd;
			cout<<"\nMonth: "<<mm;
			cout<<"\nYear: "<<yy<<endl;
		}
};

main()
{
	date D;
	int d,m,y;
	cout<<"Enter the date, month and year:\n";
	cin>>d>>m>>y;
	D.setDate(d,m,y);
	D.showDate();
}
