/*Define a class named GroceryItem. Include private fields that hold an items stock number, price, quantity in stock, 
and total value. Write a public function named dataEntry()that calls four private functions. 
Three of the private functions prompt the user for keyboard input for a value for one of the data fields stock number, price, 
and quantity in stock. The function that sets the stock number requires the user to enter a value between 1000 and 9999 inclusive;
continue to prompt the user until a valid stock number is entered. The functions that set the price and quantity in stock
require non-negative values; continue to prompt the user until valid values are entered. 
Include a fourth private function that calculates the GroceryItems total value field (price times quantity in stock). 
Write a public function that displays a GroceryItems values. Finally,
write a main()function that declares a GroceryItem object, assigns values to its fields, and uses the display function.*/

#include<iostream>
using namespace std;
class GroceryItem{
private:
int stock_no;
int price;
int qt;
int total_value;
void enter_stock_no(){
  int x;
  int y=2;
  while (y>1){
    cout<<"\nEnter the stock number: ";
    cin>>x;
    if(x>=1000 && x<=9999){
      y=1;
      continue;
    }
    else{
      cout<<"\nPlease enter a vaild input(range from 1000 to 9999)";
    }
  }
  stock_no = x;
}
void enter_price(){
  int x;
  int y = 2;
  while(y>1){
    cout<<"\nEnter the price: ";
    cin>>x;
    if(x>0){
      y=1;
      continue;
    }
    else{
      cout<<"\nPlease enter a vaild input(which is greater than zero)";
    }
  }
  price = x;
}
void enter_qt(){
  int x;
  int y=2;
  while(y>1){
    cout<<"\nEnter the quantity: ";
    cin>>x;
    if(x>0){
      y=1;
      continue;
    }
    else{
      cout<<"\nPlease enter a vaild input(which is greater than zero)";
    }
  }
  qt = x;
}
void total_value_of_grocery_item(){
  total_value = price*qt;
}

public:
void dataEntry(){
  enter_stock_no();
  enter_price();
  enter_qt();
  total_value_of_grocery_item();
}
void display(){
  cout<<"\nStock Number: "<<stock_no;
  cout<<"\nStock Price: "<<price;
  cout<<"\nStock QT: "<<qt;
  cout<<"\nThe total number of Cost: "<<total_value<<endl;
}

};
int main(){
  GroceryItem G;
  G.dataEntry();
  G.display();
}
