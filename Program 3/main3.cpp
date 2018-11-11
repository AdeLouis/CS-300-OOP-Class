/*
  Louis Gomez
  B343X495
  Program #3
  */

/*
Pseudo code:
  Declare several classes for testing fraction member Functions
  do while(value is not 7) - ask user for input for Selection
  checks to see if number is valid (1 to 7)
    1. add Fractions
    2. subtract Fractions
    3. Multiply
    4. Divide
    5. reduces fraction
    6. show decimal approximation
    7. exit

*/
  #include <iostream>
  #include "fraction.hpp"
  using namespace std;

  int main(void)
  {
    int num;
    Fraction f1,f2,f3,f4;
    Fraction f5,f6, f7, f8,f9, f10;
    Fraction add, subtract, multiply, divide;
    double reduce;
    do {

      cout <<"1. Add Fractions "<<endl;
      cout <<"2. Subtract fractions"<<endl;
      cout <<"3. Multiply fractions"<<endl;
      cout <<"4. Divide Fractions"<<endl;
      cout <<"5. Reduce a fraction"<<endl;
      cout <<"6. Show the decimal equivalent of a fraction"<<endl;
      cout <<"7. Exit the program"<<endl;
      cout << endl;

      cout <<"What is your selection: ";
      cin >>num;

      if ((num < 1 ) || (num > 7))
      { //Checks to make sure the selection is between range
        cout <<"Selection out of range. Select between (1,7)"<<endl;
        cout <<endl;
      }

      else
      {
        switch(num)
        {
          //Add fractions
          case 1:

            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f1;

            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f2;
            add = f1 + f2;
            cout <<"Result: "<< add <<endl;
          break;
          //Subtract fractions
          case 2:
            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f3;

            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f4;
            subtract = f3 - f4;
            cout <<"Result: "<< subtract <<endl;
          break;
          //Multiply fractions
          case 3:
            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f5;

            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f6;
            multiply = f5 * f6;
            cout <<"Result: "<< multiply <<endl;
          break;
          //Divide fractions
          case 4:
            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f7;

            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f8;
            divide = f7 / f8;
            cout <<"Result: "<< divide <<endl;
          break;
          //Reduce fractions
          case 5:
            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f9;
            f9.reduce();
          break;
          //Show decimal equivalent of fractions
          case 6:
            cout <<"Enter 1st numerator denominator (space in between): "<<endl;
            cin >> f10;

            reduce = f10.show_decimal();
            cout<<"Decimal equivalent is: "<<reduce<<endl;

          break;
          default:
            cout <<"Exiting the program"<<endl;
          break;
        }
      }
    } while(num != 7);
    return 0;
  }
