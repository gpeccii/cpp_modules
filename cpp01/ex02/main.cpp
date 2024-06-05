#include <iostream>

int main() {
	// String variable initialized to "HI THIS IS BRAIN"
	std::string str = "HI THIS IS BRAIN";

	// Pointer to the string
	std::string* stringPTR = &str;

	// Reference to the string
	std::string& stringREF = str;

	// Print the memory address of the string variable
	std::cout << "Memory address of the string variable: " << &str << std::endl;

	// Print the memory address held by stringPTR
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;

	// Print the memory address held by stringREF
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	// Print the value of the string variable
	std::cout << "Value of the string variable: " << str << std::endl;

	// Print the value pointed to by stringPTR
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;

	// Print the value pointed to by stringREF
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}
