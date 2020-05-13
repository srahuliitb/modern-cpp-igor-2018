#include <iostream> // Built-in type to perform input output operations.
#include <string> // Built-in type to perfrom string operations.

int main(){

	std::string hello = "Hello";
	std::cout << "\nEnter your name: ";
	std::string name = ""; // Initialise empty string.
	std::cin >> name; // Read the value entered by a user.
	std::cout << hello + ", " + name + "!" << std::endl; // String concatenation.

	return 0;
}