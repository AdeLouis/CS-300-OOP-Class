/*
  Louis Gomez
  B343X495
  Program #5
  random information for testing
  
  This is the template class implementation of the arraydb in class example

  Pseudo Code:
  Class name: Arraydb
  Data - size - indicates teh size of the dynamic memory allocation
         arr_ptr - pointer to the dynamic memory created

  Public:
    ArrayDb - default constructor
    ArrayDb - overloaded constructor for default constructor for default initialization
    ArrayDb - overloaded constructro for normal initialization
    ArrayDb - copy construtor
    ~ArrayDb - destructor

    Functions:
        get_ary_size - gets the size of the object
        operator[] - function to for iterating through the dynamic memory
        const operator[] - const version of operator[]
        operator= - assign one object to anothe robject
        operator<< - friend operator to output objects of class ArrayDb


*/
#ifndef __ARRAYDB_HPP__
#define __ARRAYDB_HPP__

#include <iostream>
using namespace std;

template <class T>
class ArrayDb
{
   unsigned int size;
 protected:
   T *arr_ptr;

 public:
	 // Default constructor
	 ArrayDb(void);

   // Create a constructor that will accept the size of the array
   // and a value to initialize the array.  Default initialization = 0
   ArrayDb(unsigned int n, T val = 0.0);

   // Initialize the array to another array given the length of the array
   ArrayDb(const T *pn, unsigned int n);

   // Copy constructor
   ArrayDb(const ArrayDb & a);

   ~ArrayDb (void);

   //Get array size
   unsigned int get_ary_size(void) const { return size; }

   // Methods
   T & operator[] (unsigned int i);
   const T & operator[] (unsigned int i) const;
   ArrayDb & operator= (const ArrayDb & a);

   template <class Ntype>
   friend ostream & operator<< (ostream & os, const ArrayDb<Ntype> & a);
};

#endif
