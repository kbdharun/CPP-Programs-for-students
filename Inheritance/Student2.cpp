#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int reg;
    public:
    void getdata()
    {
        cout<<"enter name and reg:";
        cin>>name;
        cin>>reg;
    }
    void print()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"REG:"<<reg<<endl;
    }
};
class result:public student
{
    private:
    int marks[3];
    public:
    void get()
    {
        getdata();
        cout<<"enter marks of 3 subjects:";
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
    void display()
    {
        print();
        for(int i=0;i<3;i++)
        {
            cout<<"MARKS "<<i+1<<":"<<marks[i];
        }
    }
    void calculate()
    {
        int tot=0;
        for(int i=0;i<3;i++)
        {
            tot=tot+marks[i];
        }
        cout<<endl<<"TOTAL MARKS:"<<tot<<endl;
    }
};
int main()
{
    result r;
    r.get();
    r.display();
    r.calculate();
}