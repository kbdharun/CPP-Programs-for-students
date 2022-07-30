#include<iostream>
using namespace std;
class b {
   public:
      b() {
         cout<<"Constructing base \n";
      }
      virtual ~b() {
         cout<<"Destructing base \n";
      }
};
class d: public b {
   public:
      d() {
         cout<<"Constructing derived \n";
      }
      ~d() {
         cout<<"Destructing derived \n";
      }
};
int main(void) {
   d *derived = new d();
   b *bptr = derived;
   delete bptr;
   return 0;
}
