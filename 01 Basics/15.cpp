#include <iostream>
using namespace std;

int main()
{
  // Original example
  int x = 2;
  int y = 55;
  cout << "Original example: " << x << " % " << y << " = " << x % y << endl;
  
  // Rule 1: a % b = a (if a < b)
  cout << "\nRule 1: a % b = a (if a < b)" << endl;
  cout << "7 % 10 = " << 7 % 10 << " (7 is less than 10, so result is 7)" << endl;
  cout << "3 % 5 = " << 3 % 5 << " (3 is less than 5, so result is 3)" << endl;
  
  // Rule 2: a % a = 0
  cout << "\nRule 2: a % a = 0" << endl;
  cout << "8 % 8 = " << 8 % 8 << " (any number modulo itself is 0)" << endl;
  cout << "15 % 15 = " << 15 % 15 << " (any number modulo itself is 0)" << endl;
  
  // Rule 3: a % (-b) = a % b
  cout << "\nRule 3: a % (-b) = a % b" << endl;
  cout << "10 % (-3) = " << 10 % (-3) << " (same as 10 % 3 = " << 10 % 3 << ")" << endl;
  cout << "17 % (-5) = " << 17 % (-5) << " (same as 17 % 5 = " << 17 % 5 << ")" << endl;
  
  // Rule 4: (-a) % b = -(a % b)
  cout << "\nRule 4: (-a) % b = -(a % b)" << endl;
  cout << "(-10) % 3 = " << (-10) % 3 << " (same as -(10 % 3) = " << -(10 % 3) << ")" << endl;
  cout << "(-17) % 5 = " << (-17) % 5 << " (same as -(17 % 5) = " << -(17 % 5) << ")" << endl;
  
  return 0;
}
// 1. a % b = a (if a < b)
// 2. a % a = 0
// 3. a % (-b) = a % b
// 4. (-a) % b = -(a % b)