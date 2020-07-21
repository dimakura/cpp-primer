#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

// Reading and writing string

int main() {
  string s;
  cin >> s; // use getline to get string with whitespaces

  cout << "String was: " << s  << endl
       << s.size() << endl 
       << s.empty() << endl;

  return 0;
}