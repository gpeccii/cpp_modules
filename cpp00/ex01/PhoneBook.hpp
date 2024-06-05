#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int	numberSaved;
	int	oldest;

public:
	PhoneBook();
	void addNewContact();
	void searchContact();
	void printManipulate(std::string text);
};

#endif
