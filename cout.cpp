#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ostream& Complex::operator <<(ostream& lhs, const Complex& temp){
  //date, region, rep, item, units, unitCost, Total
  lhs << temp.re << "+" << temp.im << "i";
  return lhs;
}