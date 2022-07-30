//Test program for checking out terminal commands using stdlib.h and color coding using ASCII//
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int a;
cout<<"Hello,this is a test program for testing out terminal system commands"<<endl;
cout<<"Enter any number:";cin>>a;
system("clear");
cout<<"\033[32mScreen cleared!,haha, Anyway the number you entered is"<<a<<endl<<endl;
cout<<"\033[31mOutput Binary File has been successfully created in the below folder\n";
system("pwd");
cout<<endl<<"\033[33mThe below files are present in the current directory"<<endl;
system("ls");
cout<<endl<<"\033[35mSystem Information"<<endl;
system("uname -a");
system("c++ --version");
system("g++ --version");
system("date");
system("uptime");
system("gnome-system-monitor");
exit(0);
}
/*ANSI Color Codes
0  │ to restore default    │
          │   │ color                 │
          ├───┼───────────────────────┤
          │   │                       │
          │1  │ for brighter colors   │
          ├───┼───────────────────────┤
          │   │                       │
          │4  │ for underlined text   │
          ├───┼───────────────────────┤
          │   │                       │
          │5  │ for flashing text     │
          ├───┼───────────────────────┤
          │   │                       │
          │30 │ for black foreground  │
          ├───┼───────────────────────┤
          │   │                       │
          │31 │ for red foreground    │
          ├───┼───────────────────────┤
          │   │                       │
          │32 │ for green foreground  │
          ├───┼───────────────────────┤
          │   │                       │
          │33 │ for yellow (or brown) │
          │   │ foreground            │
          ├───┼───────────────────────┤
          │   │                       │
          │34 │ for blue foreground   │
          ├───┼───────────────────────┤
          │   │                       │
          │35 │ for purple foreground │
          ├───┼───────────────────────┤
          │   │                       │
          │36 │ for cyan foreground   │
          ├───┼───────────────────────┤
          │   │                       │
          │37 │ for white (or gray)   │
          │   │ foreground            │
          ├───┼───────────────────────┤
          │   │                       │
          │40 │ for black background  │
          ├───┼───────────────────────┤
          │   │                       │
          │41 │ for red background    │
          ├───┼───────────────────────┤
          │   │                       │
          │42 │ for green background  │
          ├───┼───────────────────────┤
          │   │                       │
          │43 │ for yellow (or brown) │
          │   │ background            │
          ├───┼───────────────────────┤
          │   │                       │
          │44 │ for blue background   │
          ├───┼───────────────────────┤
          │   │                       │
          │45 │ for purple background │
          ├───┼───────────────────────┤
          │   │                       │
          │46 │ for cyan background   │
          ├───┼───────────────────────┤
          │   │                       │
          │47 │ for white (or gray)   │
          │   │ background
*/
