#include <iostream>
using namespace std;
/*
  Louis Gomez
  B343X495
  Program #3

  This is a fraction class that can store fraction in bith fraction form and
  decimal form. It can also, add, subtract, divide and multiply fractions.

  Psuedo Code:
  Class name: Fraction
  Data: num - holds the numerator value of the fractions
        denum - holds the denominator value of the fractions
        decimal - holds the decimal representation of the fraction

  Public:
        Fraction - default construtor, sets values to 1
        Fraction - overloaded constructor

  Mutator functions:
        operator+ - overloaded addtion of fractions
        operator- -overloaded subtract of fractions
        operator* - overloaded multiply for fractions
        operator/ - overloaded divide for fractions
        operator>> - overloaded cin to get values from user
        reduce - reduces fraction and returns result

  Accessor Functions:
        operator<< - overloaded cout to print to terminal
        show_decimal - functions to show decimal of the fraction
  Private:
        calc_decimal - calculates the values of fraction
                    Return: nothing
                    Input : None

                    decimal = num/denum


*/

class Fraction
{
  int num,denum;
  double decimal;
  void calc_decimal(void);

public:


  Fraction();
  Fraction(int n, int d);

  //Mutator Functions
  Fraction operator+ (Fraction & n);
  Fraction operator- (Fraction & n);
  Fraction operator* (Fraction & n);
  Fraction operator/ (Fraction & n);

  friend istream& operator>> (istream& in, Fraction & n);
  void reduce();

  //Accessor functions
  friend ostream& operator<< (ostream& out, const Fraction & n);
  double show_decimal();
};
