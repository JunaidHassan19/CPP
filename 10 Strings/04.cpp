#include <iostream>
using namespace std;

// Q: Input a string of length n and count all the vowels in the given string.

int main()
{
  string str = "Input a string of length n and count all the vowels in the given string.";
  int count = 0;

  for (int i = 0; i <= str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      count++;
    };
  }
  cout << str << endl;
  cout << "Vowels: " << count << endl;
}