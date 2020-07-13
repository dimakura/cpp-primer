#include <iostream>

int main() {
  const int i = 42;
  auto j = i;        // int
  const auto &k = i; // const int&
  auto *p = &i;      // const int* (low-level const)
  const auto j2 = i, &k2 = i; // const int, cosnt int&

  return 0;
}