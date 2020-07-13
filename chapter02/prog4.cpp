// References (pp. 50-51)
#include <iostream>

int main() {
  // ex 2.16
  // int i = 0, &r1 = i;
  // double d = 0, &r2 = d;
  // r2 = 3.14159;
  // r2 = r1;
  // i = r2;
  // r1 = d;
  // std::cout << i << " " << d << std::endl;

  // ex 2.17
  int i, &ri = i;
  i = 5;
  ri = 10;
  std::cout << i << " " << ri << std::endl;

  return 0;
}