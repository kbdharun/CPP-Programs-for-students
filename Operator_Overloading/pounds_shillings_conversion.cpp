#include<iostream>
#include<string.h>
using namespace std;
class conversion{
long pounds;
int shilings;
int pence;

public:
conversion(){}
conversion(int pds){
  pounds = pds;
}
conversion(int pds,int shi,int pe){
  pounds = pds;
  shi = shilings;
  pence = pe;
}
void getSterling(string a){
  int pos1,pos2;
  pos1 = a.find('.');
  pos2 = a.rfind('.');
  string b,c,d;
  b = a.substr(0,pos1);
  c = a.substr(pos1+1,pos2);
  d = a.substr(pos2+1);
  pounds = stoi(b);
  shilings = stoi(c);
  pence = stoi(d);
  }
void putSterling(){
  cout<<"\n€"<<pounds<<"."<<shilings<<"."<<pence;
}
conversion operator + (conversion a){
  conversion b;
  b.pounds = a.pounds+pounds;
  b.shilings = a.shilings+shilings;
  b.pence = pence+a.pence;
  return b;
}
conversion operator - (conversion a){
  conversion b;
  b.pounds = a.pounds-pounds;
  b.shilings = a.shilings-shilings;
  b.pence = a.pence-pence;
  return b;
}
conversion operator * (double a){
  conversion b;
  b.pounds = a*pounds;
  b.shilings = a*shilings;
  b.pence = pence*a;
  return b;
}
conversion operator / (conversion a){
  conversion b;
  b.pounds = a.pounds/pounds;
  b.shilings = a.shilings/shilings;
  b.pence = a.pence/pence;
  return b;
}
conversion operator / (double a){
  conversion b;
  b.pounds = pounds/a;
  b.shilings = shilings/a;
  b.pence = pence/a;
  return b;
}
operator double(){
  return pounds;
}
};
int main(){
  conversion a1(10,20,30),a2,a3,a4,a5,a6,a7,a8;
  string a;
  cin>>(a);
  a2.getSterling(a);
  a2.putSterling();
  a3 = a1+a2;
  a4 = a2-a1;
  a5 = 10*a1;
  a6 = a1/a2;
  a7 = 10/a1;
  a8 = a1/10.00;
  a3.putSterling();
  a4.putSterling();
  a5.putSterling();
  a6.putSterling();
  a7.putSterling();
  a8.putSterling();
}

