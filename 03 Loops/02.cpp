#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "How many times do you want to see 'Good job': ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Good job" << endl;
  }
}