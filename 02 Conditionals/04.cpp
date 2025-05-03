#include <iostream>
using namespace std;

int main()
{
  int SP, CP, profit, loss;
  cout << "Enter the selling price: ";
  cin >> SP;

  cout << "Enter the cost price: ";
  cin >> CP;

  if (SP > CP)
  {
    cout << "Profit: " << SP - CP << endl;
  }
  else if (CP > SP)
  {
    cout << "Loss: " << "-" << CP - SP << endl;
  }
  else
  {
    cout << "No profit no loss." << endl;
  }
}
