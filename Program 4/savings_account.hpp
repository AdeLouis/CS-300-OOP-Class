/*
  Louis Gomez
  B343X495
  Program #4

  This is the derived class savings Account

  Pseudo Code:
  Class name: Savings_account
  Data - interest - interest value assigned to the account
         acc_balance (inherited from base class)

  Public:
    Savings_account - gets the account balance, also sets the accounts interest
                      rate

    Functions:
        credit (inherited from base class) - update the account acc_balance
        debit (inherited from base class) - withdraws money from the account
              balance. Also checks to see if input is greater than curret
              account acc_balance
        calculate_interest - calculates the nterest rate. Rate * Acc_balance


*/

#ifndef _SAVINGS_ACCOUNT_HPP_
#define _SAVINGS_ACCOUNT_HPP_

#include "account.hpp"

class Savings_account : public Account
{
  double interest;

public:
  Savings_account(double a, double b);

  //Member Functions
  double calculate_interest(double a);
  //inherited Functions
  //credit, debit
};

#endif
