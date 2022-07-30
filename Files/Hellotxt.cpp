#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int i;
char x[10];
char n[10][10];
for (i=0;i<10;i++){
cin.get(n[i],100);
}
ofstream l("Hello.txt");
for(i=0;i<10;i++){
l<<n[i];
}
ifstream k("Hello.txt");
while(k.eof()){
k>>x[i];
}
}
