#include <iostream>

using namespace std;

class base1
{
    private:
    int x=10;
    public:
    void show()
    {
        cout<<"base class1:";
    }
};
class base2
{
    private:
    int y=10;
    public:
   void show()
   {
        cout<<"base class2:";
   }
};
class derived:public base1,public base2
{
    private:
    int z=20;
    public:
    void final()
    {
        cout<<"the end"<<endl;
    }
};
int main()
{
    derived d;
    d.base1::show();
    d.base2::show();
}
