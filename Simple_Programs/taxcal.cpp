//C++ Program to calculate tax using given conditions//
#include<iostream>
using namespace std; 
 #define MIN_INCOME1 150001 
 #define MAX_INCOME1 300000 
 #define TAX_RATE1 0.10 
 #define MIN_INCOME2 300001 
 #define MAX_INCOME2 500000 
 #define TAX_RATE2 0.20 
 #define MIN_INCOME3 500001 
 #define TAX_RATE3 0.30 
int main()
 { 
	double income, taxable_income,tax; 
    cout<<"\n Enter the income: ";cin>>income; 
    taxable_income = income - 150000; 
    if(taxable_income <= 0)  { 
       cout<<"\n NO TAX"; 
   } 
   else if(taxable_income >= MIN_INCOME1 && taxable_income < MAX_INCOME1)  { 
       tax = (taxable_income - MIN_INCOME1) *TAX_RATE1; 
   } 
  else if(taxable_income >= MIN_INCOME2 && taxable_income < MAX_INCOME2) { 
    tax = (taxable_income - MIN_INCOME2) * TAX_RATE2; 
  } 
 else  { 
    tax = (taxable_income - MIN_INCOME3) * TAX_RATE3; 
    cout<<"\n TAX="<<tax; 
  } 
  return 0; 
 } 
