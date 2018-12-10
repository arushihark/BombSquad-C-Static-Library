#include "complex.h"

/* 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
Title: Complex Equals Operator
Author: Lucas Teltow 
Description: Overloads = operator to allow for setting one complex equal to another. 
Created: 12/4/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

void Complex:: operator =(const Complex& rhs)
{
   Complex temp = *this;
   temp.re = rhs.re;
   temp.im = rhs.im;
   *this = temp;
}