#include "account.hpp"
#include <iostream>
using namespace std;

/*
  Louis Gomez
  B343X495
  Program #4
*/

//Constructor if num is < 0, outputs error
Account::Account(double a)
{
  if (a > 0)
  {
    acc_balance = a;
  }
  else
  {
    acc_balance = 0;
    cerr << "Initial Account Balance Value is invalid."<<endl;
  }
}

//Function to add value to current Balance, "credit"

void Account::credit(double a)
{
  acc_balance = acc_balance + a;
}

//Function to withdraw a certain amaount, "debit"

bool Account::debit(double a)
{
  if (a > acc_balance)
  {
  cerr << "Debit amount exceeded account balance " <<endl;
  return false;
  }
  else
  {
    acc_balance = acc_balance - a;
    return true;
  }
}

//Function to get current account balacne
double Account::get_balance()
{
  return acc_balance;
}
