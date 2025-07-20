#include <iostream>
using namespace std;

int greet()
{
  cout << "Hey!" << endl;
  greet();
}
int main()
{
  greet();
}