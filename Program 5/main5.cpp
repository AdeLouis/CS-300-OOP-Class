/*
  Louis Gomez
  B343X495
  Program #4
  */

/*
Pseudo code:
  Declare variables for type double, int, char, float, short int, long integer
  Create Objects for each type - for overloaded constructor
  TEst for overloaded <<
  Test for overloaded ==
  Test .get_array_size
  Test Operator []

*/

#include <iostream>
#include "arraydb.cpp"
using namespace std;


int main (void)
{
   double a1[5] = {155.28889, 189.6564, 174.3432, 256.9, 203.5};
   int a2[6] = {1,3,56,7,5,7};
   char a3[3] = {'l', 'r', 'O'};
   float a4[3] = {2.45, 67.45, 34.678};
   short int a5[4] = {90, 34, 6778, 234};
   long int a6[4] = {455556,2334, 6778, 21109};

   ArrayDb <double> val1(a1,5);
   ArrayDb <int> val2(a2,6);
   ArrayDb <char> val3(a3,3);
   ArrayDb <float> val4(a4,3);
   ArrayDb <short int> val5(a5,3);
   ArrayDb <long int> val6(a6,3);

   cout<<"*******Testing for overloaded operator <<*******"<<endl;

   cout <<"The double values in val1 are: \n" << val1;
   cout <<"The integer values in val2 are: \n" << val2;
   cout <<"The character values in val3 are: \n" << val3;
   cout <<"The float values in val4 are: \n" << val4;
   cout <<"The short integer values in val5 are: \n" << val5;
   cout <<"The long integer values in val6 are: \n" << val6;

   // Default object
   ArrayDb <double> dup;
   ArrayDb <int> iup;
   ArrayDb <float> fup;
   ArrayDb <short int> siup;
   ArrayDb <long int> liup;
   ArrayDb <char> cup;

   //Array assignment - calls the overloaded operator=
   cout<<endl;
   cout<<"*******Testing for overloaded operator=*******"<<endl;

   dup = val1;
   cout << "Here's the original val1:\n" << val1;
   cout << "Here's the copy dup :\n" << dup;

   iup = val2;
   cout << "Here's the original val2:\n" << val2;
   cout << "Here's the copy iup :\n" << iup;

   fup = val4;
   cout << "Here's the original val4:\n" << val4;
   cout << "Here's the copy fup :\n" << fup;

   cup = val3;
   cout << "Here's the original val3:\n" << val3;
   cout << "Here's the copy cup :\n" << cup;

   siup = val5;
   cout << "Here's the original val5:\n" << val5;
   cout << "Here's the copy siup :\n" << siup;

   liup = val6;
   cout << "Here's the original val6:\n" << val6;
   cout << "Here's the copy liup :\n" << liup;

   cout<<endl;
   cout<<"*******Testing to get the size of the array*******"<<endl;

   cout <<"Size for val1 is: "<<val1.get_ary_size()<<endl;
   cout <<"Size for val2 is: "<<val2.get_ary_size()<<endl;
   cout <<"Size for val3 is: "<<val3.get_ary_size()<<endl;
   cout <<"Size for val4 is: "<<val4.get_ary_size()<<endl;
   cout <<"Size for val5 is: "<<val5.get_ary_size()<<endl;
   cout <<"Size for val6 is: "<<val6.get_ary_size()<<endl;

   cout<<endl;
   cout<<"*******Testing to iterate through an array*******"<<endl;

   cout<<"Iterating for val1"<<endl;
   for (unsigned int i = 0; i < val1.get_ary_size(); i++)
   {
   	    cout.width(5);
        cout << i << ": " << val1[i] << "\n";
   }

   cout<<"Iterating for val2"<<endl;
   for (unsigned int i = 0; i < val2.get_ary_size(); i++)
   {
   	    cout.width(5);
        cout << i << ": " << val2[i] << "\n";
   }

   cout<<"Iterating for val3"<<endl;
   for (unsigned int i = 0; i < val3.get_ary_size(); i++)
   {
        cout.width(5);
        cout << i << ": " << val3[i] << "\n";
   }

   cout<<"Iterating for val4"<<endl;
   for (unsigned int i = 0; i < val4.get_ary_size(); i++)
   {
   	    cout.width(5);
        cout << i << ": " << val4[i] << "\n";
   }

   cout<<"Iterating for val5"<<endl;
   for (unsigned int i = 0; i < val5.get_ary_size(); i++)
   {
   	    cout.width(5);
        cout << i << ": " << val5[i] << "\n";
   }

   cout<<"Iterating for val6"<<endl;
   for (unsigned int i = 0; i < val6.get_ary_size(); i++)
   {
   	    cout.width(5);
        cout << i << ": " << val6[i] << "\n";
   }

   return 0;
}
