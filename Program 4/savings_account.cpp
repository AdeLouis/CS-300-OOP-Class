#include "savings_account.hpp"
//#include "account.cpp"

/*
  Louis Gomez
  B343X495
  Program #4
*/

//constructor
Savings_account::Savings_account(double a, double b): Account(a)
{
  interest = b;
}

//function to calculate interest for the account
double Savings_account::calculate_interest(double a)
{
  return (a / 100) * acc_balance;
}
