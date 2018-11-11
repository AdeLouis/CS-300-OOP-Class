/*
  Louis Gomez
  B343X495
  Program #4
  */

/*
Pseudo code:
  Declare account, savings and checking_account
  run test for account, savings and checking


*/

#include <iostream>
#include "account.hpp"
#include "checking_account.hpp"
#include "savings_account.hpp"
using namespace std;

int main(void)
{
   Account a1(2150.54);
   Savings_account s1(1756.546,20);
   Checking_account c1(500.65, 10);

   //Test for base class Account
   cout <<"****For Account object a1***"<<endl;
   cout <<"Current balance: "<< a1.get_balance() <<endl<<endl;
   cout <<"Crediting account with $320"<<endl;
   a1.credit(320);
   cout <<"Current balance: "<< a1.get_balance() <<endl;
   cout <<"Debiting account with $5000"<<endl;
   a1.debit(5000);
   cout <<"Debiting account with $1000"<<endl;
   a1.debit(1000);
   cout <<"Current balance: "<< a1.get_balance() <<endl<<endl;

   //Test for derived class savings Account
   cout <<"***For savings account object s1***"<<endl;
   cout <<"Current balance: "<< s1.get_balance() <<endl<<endl;
   cout <<"Adding interest of 15 percent"<<endl;
   double num = s1.calculate_interest(15);
   s1.credit(num);
   cout <<"Current balance: "<< s1.get_balance() <<endl<<endl;
   cout <<"Debiting account with $500"<<endl;
   s1.debit(500);
   cout <<"Current balance: "<< s1.get_balance() <<endl<<endl;

   //Test for derived class Checking Account
   cout <<"***For checking account object c1***"<<endl;
   cout <<"Current balance: "<< c1.get_balance() <<endl<<endl;
   cout <<"Crediting account with $150"<<endl;
   c1.credit(150);
   cout <<"Current balance: "<< c1.get_balance() <<endl<<endl;
   cout <<"Debiting account with $1000"<<endl;
   c1.debit(1000);
   cout <<"Debiting account with $250"<<endl;
   c1.debit(250);
   cout <<"Current balance: "<< c1.get_balance() <<endl<<endl;

  return 0;
}
