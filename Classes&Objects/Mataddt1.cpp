#include <iostream>
using namespace std;
class Matrix
{
int a[10][10];
 public:
 	int r,c,i,j,x;
 	void get()
 	{
	cout<<"Enter the number of rows and columns(between 1 and 100): ";
	cin>>r>>c;
	 cout<<"\nEnter elements of 1st matrix:\n";
	  for (i = 0; i < r; ++i)
	    for (j = 0; j < c; ++j) {
	      cout<<"Enter elements: "<<i + 1<<j + 1;
	      cin>>a[i][j];
	    }
	}
	void add(Matrix O1, Matrix O2)
	{
		// adding two matrices
	  for (i = 0; i<r; ++i)
	    for (j = 1; j<c; ++j) {
	      a[i][j] = O1.a[i][j] + O2.a[i][j];
	}
	}		
	void put()
		{
			cout<<"\n Matrix";
			for(int i=0;i<r;i++)
			{
			for(int j=0;j<=c;j++)	
			{
				cout<<a[i][j]<<endl;
			}
			}			
		}	
	
};

main()
{
	Matrix m1,m2,S;
	m1.get();
	m2.get();
	S.add(m1,m2);
	S.put();
}

