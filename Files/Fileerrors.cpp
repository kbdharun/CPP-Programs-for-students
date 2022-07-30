#include <iostream>
#include <fstream>
#include<cstring>

using namespace std;


int main()
{
   string getcontent;
   string search;
  
   cout << "Input: ";
   cin >> search;
   
    ifstream openfile ("TEST.txt");
    
     if(openfile.is_open())
     {

        while(!openfile.eof())
        {                   
          getline (openfile,getcontent);//
          cout << getcontent << endl; // these two lines alone in a while loop display ALL records
          
          
        
        if(search == getcontent ) // this was my theory for searching records but does not display anything to the console
         {
        cout << getcontent << endl;
         }
    
        }
        openfile.close();
    
     }
     else
         {
         cout << "File error\n";
         }
  
   return 0;
}
