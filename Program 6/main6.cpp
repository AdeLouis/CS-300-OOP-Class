/*
  Louis Gomez
  B343X495
  Program #6
  */

/*
Pseudo code:
  Declare variables for type character
  Intialize unsigned index and input to get values from user


*/

#include <iostream>
#include "arraydb.cpp"
using namespace std;


int main (void)
{

   char name[8] = {'O', 'O', 'b', 'i', 's', 'f', 'u', 'n'};
   unsigned int index;
   unsigned int input;
   ArrayDb <char> val3(name,8);

   try
     {
       cout <<"The character values in name array are: \n" << val3;
       cout <<"Input an index to get character: ";
       cin >> index;
       cout <<"The character for the "<<index<<" Index is: "<< val3[index]<<endl;
     }
     catch(Out_of_bounds &obj)
     {
       cout << "Error in the catch block: "
            <<  obj.what() <<endl;
     }

   try
   {
     cout <<"Input a value for create size of ArrayDb: ";
     cin >> input;
     ArrayDb <int> val4(input);
   }

   catch(exception &e)
   {
     cout << "Execution occured "<< e.what()<<endl;
   }
   return 0;
}
