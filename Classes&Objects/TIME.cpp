/* 
Write a c++ program for a class TIME with attributes hrs,mts, and secs for hours,
minutes, and seconds respectively. Have getTIME() member function to get input from
user and dispTIME() to display the time in the format hh:ss:mm (use setw). Also define
a member function called calcTIME(int) which gets the seconds value as input and
display the time in hours,minutes and seconds respectively.*/

#include<iostream>
#include<iomanip>
using namespace std;
class TIME
{
	int hrs,secs,mts;
	public:
		void getTIME()
		{
			cout << "Enter the hours: ";
			cin >> hrs;
			cout << "Enter the minutes: ";
			cin >>mts;
			cout << "Enter the seconds: ";
			cin >> secs;
		}
		void dispTIME()
		{
			if (mts < 10 || secs < 10)
			{
				cout << setfill(':') << hrs << setw(2) << "0" << mts << setw(2) << "0" << secs << endl;
			}
			else
			{
				cout << setfill(':')<< hrs << setw(3) << mts << setw(3) << secs%60 << endl;
			}
		}
		void calcTIME(int secs)
		{
			hrs = secs/3600;
			mts = (secs - (hrs*3600))/60;
			secs = (secs - (hrs*3600) - (mts*60));
			cout << hrs << ":" << mts << ":" << secs << endl;	
		}
};
int main()
{
	TIME time;
	time.getTIME();
	time.dispTIME();
	int secs;
	cout << "Enter the time in secs: ";
	cin >> secs;
	time.calcTIME(secs);
}
