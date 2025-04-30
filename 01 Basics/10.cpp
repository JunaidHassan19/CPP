#include <iostream>
using namespace std;

int main()
{
  // Formula: SI = (P * R * T) / 100
  int P = 200;                  // Principal amount
  int R = 5;                    // Rate of interest
  int T = 2;                    // Time in years
  float SI = (P * R * T) / 100; // Simple Interest calculation

  cout << "Simple Interest = " << SI << endl; // Output the result
}