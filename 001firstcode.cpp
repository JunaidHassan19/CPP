// This is a preprocessor directive that includes the iostream library
// iostream allows us to use input/output operations like cout
#include <iostream>

// The main function is the entry point of every C++ program
// Program execution begins and ends in the main function
int main()
{
  // std::cout is used to output text to the console
  // << is the output operator
  // std::endl adds a new line and flushes the output buffer
  std::cout << "First C++ code!" << std::endl;
  std::cout << "this is my first C++ code." << std::endl;

  // The return value of main indicates the program's exit status
  // 0 typically means the program executed successfully
  return 0;
}