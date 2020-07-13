#include "../01/Sales_item.h"
#include <iostream>

int main() {
  // typedef double wages;
  using wages = double;
  using pdouble = double *;

  wages mySalary = 2000.0;
  wages yourSalary = 3000.0;
  const pdouble s = &mySalary;
  // s = &yourSalary; // ERROR: s has type: double *const

  std::cout << "My salary is: " << mySalary << std::endl;
  std::cout << "My salary is: " << *s << std::endl;

  return 0;
}