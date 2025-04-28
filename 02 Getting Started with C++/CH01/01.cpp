// This line includes the input/output stream library, which is needed for console input and output operations
#include <iostream>

// The main function is the entry point of any C++ program
// Execution of the program begins and ends here
int main()
{
  // This line outputs the text "Hi There!" to the console
  // std::cout is the standard output stream object
  // std::endl inserts a newline character and flushes the stream
  std::cout << "Hi There!" << std::endl;

  // These lines output two empty lines to the console
  // The first std::endl creates one empty line
  // The second std::endl creates another empty line
  std::cout << std::endl
            << std::endl;
  // The return value of main indicates the exit status of the program
  // A return value of 0 indicates successful execution
  return 0;
}