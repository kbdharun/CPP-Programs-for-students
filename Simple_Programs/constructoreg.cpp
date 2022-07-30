//Sample C++ for constructors//
#include <iostream>
using namespace std;
class counter
{
private:
unsigned int count ; //count
public:
counter():count(0)//constructor
{/*Empty body*/}
void inc_count() //increment counter
{count++;}
int get_count() //return counter
{return count;}
};
int main()
{
counter c1,c2; //define and initialise
cout<<"\nc1="<<c1.get_count(); //display
cout<<"\nc2="<<c2.get_count();
c1.inc_count();//increment c1
c2.inc_count();//increment c2
cout<<"\nc1="<<c1.get_count(); //display again
cout<<"\nc2="<<c2.get_count();
cout<<endl;
return 0;
}
