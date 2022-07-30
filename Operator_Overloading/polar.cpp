#include<iostream>
#include<cmath>
using namespace std;
class polar{
int r1,r2;
int a;
public:
polar(){ 
}
polar(int rad1,int rad2,int angle){
  r1 = rad1;
  r2 = rad2;
  a = angle;
}
void display(){
  cout<<"\nX coordinate: "<<r1*cos(a);
  cout<<"\nY coordinate: "<<r2*sin(a);
}
polar operator +(polar x){
  polar y;
  y.r1 = x.r1+r1;
  y.r2 = x.r2+r2;
  y.a = x.a+a;
  return y;
}
};
int main(){
  polar a1(20,10,30),a2(10,20,90);
  a1.display();
  a2.display();
  polar a3;
  a3 = a1 + a2;
  a3.display();
}
