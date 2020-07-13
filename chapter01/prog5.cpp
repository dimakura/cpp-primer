#include <iostream>

int main() {
  int sum = 0, value = 0;
  while (std::cin >> value) // use Ctrl+D for "end-of-line"
    sum += value;
  std::cout << "Sum is " << sum << std::endl;

  return 0;
}