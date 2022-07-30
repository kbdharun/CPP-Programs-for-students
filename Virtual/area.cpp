#include <iostream>

using namespace std;

class shape
{
    public:
    virtual void get()=0;
    virtual void area()=0;
    virtual void show()=0;
};
class square:public shape
{
    private:
    int s,a;
    public:
    void get()
    {
        cout<<"enter side ofsquare:";
        cin>>s;
    }
    void area()
    {
        a=s*s;
    }
    void show()
    {
        cout<<"area of square:"<<a;
    }
};
class triangle:public shape
{
    private:
    int b,h,a;
    public:
    void get()
    {
        cout<<"enter side of triangle:";
        cin>>b>>h;
    }
    void area()
    {
        a=0.5*b*h;
    }
    void show()
    {
        cout<<"area of triangle:"<<a;
    }
};
int main()
{
    shape *s[10];
    s[0]=new square;
    s[1]=new triangle;
    for(int i=0;i<3;i++)
    {
        s[i]->get();
         s[i]->area();
          s[i]->show();
    }
}
