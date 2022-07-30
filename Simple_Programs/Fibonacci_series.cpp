//C++ program for fibonacci series//

#include<iostream>
using namespace std;
int main()
{
	int num,t1=0,t2=1,nT=0; //Here nT is next term
	cout<<"Enter the number of terms:";
    cin >> num;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= num; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nT= t1 + t2;
        t1 = t2;
        t2 = nT;
        
        cout << nT<< ",";
    }
    return 0;
}
