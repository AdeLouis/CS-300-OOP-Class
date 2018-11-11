/*
  Louis Gomez
  B343X495
  Program #4

  This is the derived checking account

  Pseudo Code:
  Class name: Checking_account
  Data - acc_balance (inherited) - stores the current accoutn acc_balance
          fee - represents the fee charged per transcation

  Public:
    Account - checks to see if value input is greater than zero, sets account
              acc_balance. Also sets fee

    Functions:
        credit - calls credit from base class. Charges fee after transcation
        debit - withdraws money from the account balance. also checks to see if
                input is greater than curret accout acc_balance. Returns bool,
                charges fee if trasaction is successful

*/
#ifndef _CHECKING_ACCOUNT_HPP_
#define _CHECKING_ACCOUNT_HPP_

#include "account.hpp"

class Checking_account : public Account
{
  double fee;

public:
  Checking_account(double a, double b);

  //redefined functions
  void credit(double a);
  bool debit(double a);
};

#endif
