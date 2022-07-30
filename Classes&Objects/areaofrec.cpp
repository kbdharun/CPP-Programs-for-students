#include<iostream>
using namespace std;

class areaclass {
	public:
	int a,b,c;
	void input(){
		cout<<"ENTER THE LENGTH\n";
		cin>>a;
		cout<<"ENTER THE BREATH\n";
		cin>>b;
	}
	void areacalc(){
		c=a*b;
	}
	void areadisplay(){
	cout<<"The area of rectangle is "<<c<<endl;
	}
};

int main()
{
areaclass areaobj;
areaobj.input();
areaobj.areacalc();
areaobj.areadisplay();

return 0;
}
