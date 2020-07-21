#include <iostream>
#include <ostream>
#include <string>

using namespace std;

// String initialization

int main() {
  string s1;          // default initialization (empty string)
  string s2 = s1;     // copy initialization
  string s3 = "hiya"; // copy initalization
  string s4(10, 'c'); // direct initialization
  string s5("hello"); // direct intialization

  cout << s1.length() << endl << s2 << endl << s3 << endl << s4 << endl;

  return 0;
}