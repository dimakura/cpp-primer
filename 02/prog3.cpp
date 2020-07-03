// Declaration and definition
// $ g++ prog3.cpp prog3a.cpp
#include <iostream>

extern int MYVAR; // defined in prog3a.cpp

int main() {
  std::cout << MYVAR << std::endl;

  return 0;
}