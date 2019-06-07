#include "checking_account.hpp"
//#include "account.cpp"

//dsfdsf
// louis gomez
/*
  Louis Gomez
  B343X495
  Program #4
*/

//constructor
Checking_account::Checking_account (double a, double b): Account(a)
{
  fee = b;
}

//redefined credit
void Checking_account::credit (double a)
{
  Account::credit(a);
  acc_balance = acc_balance - fee;
}

//redefined Debit
bool Checking_account::debit (double a)
{
  bool val = Account::debit(a);
  if (val == true)
    acc_balance = acc_balance - fee;
return val;
}
