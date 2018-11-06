#include<iostream>
#include "Calculator.h"

 void Calculator::Calculatesalary() const
{
   int basic=200;
   int extra=0;
   int salary=0;
   unsigned int counter=0;

   while (counter>=0)
   {
       cout<<"\nEnter sales in dollars(-1 to end )";
   cin>>extra;

   if(extra!=-1)
   {
       salary=basic+extra*0.09;
       cout<<"Salary is :$"<<salary;
   }
   }
}


