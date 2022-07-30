/*Write a CPP program to create a class name "TimeCon" in which read the time
from the user in seconds and convert it and print it in HH:MM:SS(Hours, Minutes
, Seconds) format. Use appropriate member functions in a class.*/

#include<iostream>
#include<iomanip>
using namespace std;
class TimeCon
{
	int hrs,mts,secs;
	public:
		void get()
		{
			cout << "Enter the time in seconds: ";
			cin >> secs; 
		}
		void Time()
		{
			hrs = secs/3600;
			mts = (secs - (hrs*3600))/60;
			secs = (secs - (hrs*3600) - (mts*60));
			cout << hrs << ":" << mts << ":" << secs << endl;	
		}
		void display()
		{
			if (mts < 10)
			{
				cout << setfill(':') << hrs << setw(2) << "0" << mts << setw(2) << secs << endl;
			}
			else if (secs < 10)
			{
				cout << setfill(':') << hrs << setw(3) << mts << setw(2) << "0" << secs << endl;
			}
			else
			{
				cout << setfill(':') << hrs << setw(2) << mts << setw(2) << secs << endl;
			}
		}
};
int main()
{
	TimeCon t;
	t.get();
	t.Time();
	t.display();
}
