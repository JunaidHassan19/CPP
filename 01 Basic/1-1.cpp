#include <iostream>
int a, b = 7;

int main()
{
  bool my_flag;
  a = 5;
  my_flag = false;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "my_flag = " << my_flag << std::endl;

  std::cout << std::endl
            << std::endl;
  return 0;
}