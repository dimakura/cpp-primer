#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

// Reading an unknown number of strings

int main() {
  string s;
  while (getline(cin, s)) {
    string::size_type len{s.length()}; // length is of string::size_type
    cout << s << " (" << len << ")" << endl;
  }

  return 0;
}