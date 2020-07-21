#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

// Reading an unknown number of strings

int main() {
  string s;
  while (getline(cin, s)) {
    cout << s << endl;
  }

  return 0;
}