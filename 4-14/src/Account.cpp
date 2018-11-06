#include<iostream>
#include "Account.h"

void Account::creditcounter() const
{
   int balance=0;
   int charges=0;
   int pay=0;
   int newbalance=0;
   int limit=0;
   int account=0;
   int counter=0;
while(counter>=0)
   {
       cout<<"Enter account number(or -1 to quit):";
       cin>>account;
       if(account!=-1)
       {
       cout<<"Enter beginning balance:";
       cin>>balance;

       cout<<"Enter total charges:";
       cin<<charges;

       cout<<"Enter total credit:";
       cin>>pay;

       cout<<"Enter credit limit:";
       cin>>limit;

       newbalance=balance+charges-pay;

       cout<<"New balance is:"<<newbalance;
       }
       if(newbalance>limit)
       {
           cout<<"Credit Limit Exceeded"
       }
   }

}

