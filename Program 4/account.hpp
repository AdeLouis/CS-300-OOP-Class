
/*
  Louis Gomez
  B343X495
  Program #4

  This is the base class Account that stores the current account acc_balance

  Pseudo Code:
  Class name: Account
  Data - acc_balance - stores the current accoutn acc_balance

  Public:
    Account - checks to see if value input is greater tan zero, sets account
              acc_balance

    Functions:
        virtual credit - update the account acc_balance
        virtual debit - withdraws money from the account balance. also checks to see if
                input is greater than curret accout acc_balance
        get_balance - returns the current account balacne

*/
#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
class Account
{
protected:
  double acc_balance;

public:

  //constructor
  Account(double a);

  //Member functions
  virtual void credit(double b);
  virtual bool debit(double b);
  double get_balance();
};

#endif
