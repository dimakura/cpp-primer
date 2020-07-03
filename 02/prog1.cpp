// This program checks exercises 2.3-2.4
#include <iostream>
#include <ostream>

int main() {
  unsigned u = 10, u2 = 42;
  int i = 10, i2 = 42;

  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl;
  std::cout << i2 - i << std::endl;
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;
  std::cout << u - i << std::endl;

  return 0;
}