// Include necessary headers
#include <iostream>  // For input/output operations
#include <string>    // For string data type

/**
 * Main function - program execution starts here
 * This program asks for the user's name and greets them
 */
int main()
{
  // Declare a string variable to store the user's name
  std::string name;
  
  // Display prompt and ensure it's immediately shown with std::flush
  std::cout << "Enter your name: " << std::flush;
  
  // Get user input and store it in the name variable
  std::cin >> name;
  
  // Display greeting message with the entered name
  std::cout << "Nice to meet you, " << name << "!" << std::endl;

  // Add two blank lines for better readability in the console
  std::cout << std::endl
            << std::endl;
  
  // Return 0 to indicate successful program execution
  return 0;
}