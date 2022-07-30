#include <iostream>

using namespace std;

int main()
{
    int a[10];
    cout<<"enter array:";
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements:";
    for(int i=0;i<3;i++)
    {
        cout<<*(a+i);
    }
}