#include <iostream>

int main() {
  const int ci = 0, &cj = ci;
  decltype(ci) x = 0;
  decltype(cj) y = x;
  // decltype(cj) z; // ERROR: initialization is required

  int i = 42, *p = &i, &r = i;
  decltype(r + 0) b;  // int
  decltype(*p) c = i; // int&

  // Exercise 2.36
  int a1 = 3, b1 = 4;
  decltype(a1) c1 = a1;
  decltype((b1)) d1 = a1;
  ++c1;
  ++d1;
  std::cout << a1 << " " << b1 << " " << c1 << " " << d1 << std::endl;

  return 0;
}