#include "arraydb.hpp"
#include "out_of_bounds.hpp"
#include <iostream>
using namespace std;


//Default constructor
//Testing othe rstuff
template <class T>
ArrayDb<T>::ArrayDb (void)
{
   arr_ptr = NULL;
   size = 0;
}

template <class T>
ArrayDb<T>::ArrayDb (unsigned int n, T val)
{
   arr_ptr = new T[n];
   size = n;
   for (unsigned int i = 0; i < size; i++)
        arr_ptr[i] = val;
}

template <class T>
ArrayDb<T>::ArrayDb (const T *pn, unsigned int n)
{

   arr_ptr = new T[n];
   size = n;
   for (unsigned int i = 0; i < size; i++)
        arr_ptr[i] = pn[i];
}

// Copy constructor
template <class T>
ArrayDb<T>::ArrayDb (const ArrayDb<T> & a)
{
   size = a.size;
   arr_ptr = new T[size];
   for (unsigned int i = 0; i < size; i ++)
    	arr_ptr[i] = a.arr_ptr[i];
}

template <class T>
ArrayDb<T>::~ArrayDb (void)
{
	if (arr_ptr != NULL)
		delete [] arr_ptr;
}

template <class T>
T & ArrayDb<T>::operator[] (unsigned int i)
{

    if (i < 0 || i >= size)
      throw Out_of_bounds();

   return arr_ptr[i];

}

template <class T>
const T & ArrayDb<T>::operator[] (unsigned int i) const
{

    if (i < 0 || i >= size)
      throw Out_of_bounds();

   return arr_ptr[i];
}

template <class T>
ArrayDb<T> & ArrayDb<T>::operator=(const ArrayDb<T> & a)
{
	if (this == &a)
   	    return *this;

   delete arr_ptr;
   size = a.size;
   arr_ptr = new T [size];
   for (unsigned int i = 0; i < size; i++)
   	    arr_ptr[i] = a.arr_ptr[i];
   return *this;

}

template <class T>
ostream & operator<< (ostream & os, const ArrayDb<T>& a)
{
	//cout << "overloaded << " << endl;
   unsigned int i;
   for (i = 0; i < a.size; i++)
   {
    	os << a.arr_ptr[i] << " ";
        if (i % 5 == 4)
      	os << "\n";
   }
   if (i % 5 != 0)
     	os << endl;
   return os;

}

/**template <class T>
void display (ArrayDb<T> & ar)
{
   //cout << "Func!\n";
   cout << ar;
   //cout << "Func!\n";
}
**/
