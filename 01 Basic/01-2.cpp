// Include necessary header files
#include <iostream> // For input/output operations
#include <string>   // For using string data type

// Main function - program execution starts here
int main()
{
  // Declare a string variable to store the user's name
  std::string name;

  // Prompt the user to enter their name
  // flush ensures the message is displayed before waiting for input
  std::cout << "Enter your name: " << std::flush;

  // Read user input from the keyboard and store it in the name variable
  std::cin >> name;

  // Display a greeting message with the user's name
  std::cout << "Hello, " << name << "!" << std::endl;

  // Add two blank lines for better formatting
  std::cout << std::endl
            << std::endl;

  // Return 0 to indicate successful program execution
  return 0;
}