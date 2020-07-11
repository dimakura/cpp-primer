// Pointers (pp. 52-59)
#include <iostream>

int main() {
  // ex. 2.18
  // int i = 10, *ip = &i;
  // int j = 12;
  // *ip = 11;
  // ip = &j;
  // std::cout << i << " " << *ip << std::endl;

  // ex 2.20
  // int i = 42;
  // int *p1 = &i;
  // *p1 = *p1 * *p1;
  // std::cout << *p1 << std::endl;

  // ex 2.21
  // int i = 0;
  // // double* dp = &i;
  // // int *ip = i;
  // int *ip = &i;

  // pointer to a pointer
  // int ival = 1024;
  // int *pi = &ival;
  // int **ppi = &pi;
  // std::cout << "The value of ival\n"
  //           << "\tdirect value: " << ival << "\n"
  //           << "\tindirect value: " << *pi << "\n"
  //           << "\tdoubly indirect value: " << **ppi << std::endl;

  // reference to a pointer
  int i = 42;
  int *p;
  int *&r = p;
  r = &i;
  // *r = 0;
  std::cout << i << " " << *r << std::endl;

  return 0;
}
