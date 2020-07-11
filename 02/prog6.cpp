// const qualifier
#include <iostream>

extern const int bufferSize;

int main() {
  // (1)
  std::cout << "===\nBuffer size is: " << bufferSize << std::endl;

  // reference to const
  const int &bs = bufferSize;
  std::cout << "Referrence is: " << bs << std::endl;

  // (2) initialization and reference to const
  int i = 42;
  const int &ri = i; // assing non-const to const reference
  // const int &ri = +i;
  i = 55;            // this changes &ri

  double dval = 3.14;
  const int &rdval = dval; // assign DOUBLE to const int reference!!
  dval = 1.66;             // note, that it doesn't change  &rdval

  std::cout << "===\nri is " << ri << std::endl;
  std::cout << "rdval is " << rdval << std::endl;

  return 0;
}