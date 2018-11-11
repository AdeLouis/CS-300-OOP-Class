  #include "fraction.hpp"
/*
  Louis Gomez
  B343X495
  Program #3
*/

//Defualt constructor
//Initialized to 1
Fraction::Fraction(): num(1), denum(1)
{}

//Constructor sets num snd denum. Calculates calc_decimal
Fraction::Fraction(int n, int d): num(n), denum(d)
{
  calc_decimal();
}

//function to calculate decimal and sets it values
void Fraction::calc_decimal()
{
  decimal = num / denum;
}

//overloaded addition functions
Fraction Fraction::operator+ (Fraction & n)
{
  int a,b;
  a = (num * n.denum) + (denum * n.num);
  b = denum * n.denum;
  return Fraction(a,b);
}

//overloaded subtraction functions
Fraction Fraction::operator-(Fraction & n)
{
  int a,b;
  a = (num *n.denum) - (denum * n.num);
  b = denum * n.denum;
  return Fraction(a,b);
}

//overloaded multiplication functions
Fraction Fraction::operator*(Fraction & n)
{
  int a,b;
  a = num *n.num;
  b = denum * n.denum;
  return Fraction(a,b);
}

//overloaded division functions
Fraction Fraction::operator/(Fraction  & n)
{
  int a,b;
  a = num *n.denum;
  b = denum * n.num;
  return Fraction(a,b);
}

//overloaded cout operator
ostream& operator<< (ostream& out, const Fraction & n)
{
  out << "(" << n.num << " / " << n.denum << ")" <<endl;
  return out;
}

//overloaded cin operator
istream & operator>> (istream& ina, Fraction & n)
{
  ina >> n.num >> n.denum;
  return ina;
}
//function to show decimal values
double Fraction::show_decimal()
{
  return (double(num)/double(denum));
}

//function to reduce fractions
void Fraction::reduce()
{
  int a,b;
  a = num;
  b = denum;
  for (int i = a * b; i > 1; i--)
  {
    //checks to see if oth numerator and denominator are both divisible by i
    if((a % i == 0) && (b % i == 0))
    {
      a /= i;
      b /= i;
    }
  }
  cout <<"Reduced fraction is: "<<"("<< a << "/" << b <<")" <<endl;
}
