#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int qt[100],price[100],amount[100],n,total=0,i;
    string items[100];
    cout<<"Enter the number of items to be added: \n";
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"\n\nPRODUCT "<<i<<endl;
        cout<<"Enter the Item:"<<endl;
        cin>>items[i];
        cout<<"Enter the Quantity:"<<endl;
        cin>>qt[i];
        cout<<"Enter the Price:"<<endl;
        cin>>price[i];
        amount[i]=price[i]*qt[i];
    }
    for (i=1;i<=n;i++){
        total = total+amount[i];
    }
    cout<<endl<<endl;
    cout<<setiosflags(ios::right)<<setw(24)<<setfill('*')<<"BILL"<<setiosflags(ios::right)<<setw(30)<<" "<<endl;
    cout<<setfill(' ')<<setw(12)<<"Item"<<setw(14)<<"Quantity"<<setw(13)<<"Price"<<setw(14)<<"Amount"<<endl;
    cout<<setw(53)<<setfill('*')<<""<<endl;
    for (i=1;i<=n;i++){
        cout<<setfill(' ')<<setw(12)<<items[i]<<setw(14)<<qt[i]<<setw(13)<<price[i]<<setw(14)<<amount[i]<<endl;
    }
    cout<<setw(53)<<setfill('*')<<""<<endl;
    cout<<setw(36)<<setfill(' ')<<"Total Amount to be paid "<<total<<setw(18)<<" "<<endl;
    cout<<setw(53)<<setfill('*')<<""<<endl;

}
