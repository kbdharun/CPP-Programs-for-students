/*Write the definition for a class called time that has hours and minutes
as integers. The class has the following member functions:
void settime(int, int) to set the specified value in the object
void showtime() to display the time object
time sum(time) to sum two-time object & return time
1. Write the definitions for each of the above member functions.
2. Write the main function to create three-time objects. Set the
value in two objects and call sum() to calculate the sum and
assign it to the third object. Display all time objects*/

#include <iostream>
#include <iomanip>
using namespace std;
class TIME
{
    int hrs, min, sec;
public:
TIME()
{
  hrs = 0; min = 0; sec = 0;
  }
~TIME()
{
}
void settime(int a,int b){
  hrs = a;
  min = b;
}
void showtime(){
  cout<<"Time is: "<<hrs<<":"<<min<<endl;
}
TIME sum(TIME a,TIME b){
  TIME l;
  l.hrs = a.hrs+b.hrs;
  l.min = a.min+b.min;
  if(l.hrs > 24){
    l.hrs = l.hrs-24;
  }
  while(l.min > 59){
    l.min = l.min - 60;
    l.hrs = l.hrs + 1;
  }
  return l;
}
};
int main()
{
  TIME s1,s2,s3;
  s1.settime(10,20);
  s2.settime(10,30);
  s3 = s1.sum(s1,s2);
  s1.showtime();
  s2.showtime();
  s3.showtime();
}
