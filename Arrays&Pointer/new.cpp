#include <iostream>

using namespace std;

int main()
{
    int size;
    int *ptr;
    cout<<"enter no of elements:";
    cin>>size;
    cout<<"enter array elemnts :";
    ptr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"elements in array are:";
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i];
    }
}