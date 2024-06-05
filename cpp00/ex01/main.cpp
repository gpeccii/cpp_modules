#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	std::string input;
	PhoneBook phonebook = PhoneBook();

	std::cout<<"Welcome to the PhoneBook\n";
	while(input.compare("EXIT") && std::cin)
	{
		std::cout<<"Enter a command: ADD or SEARCH or EXIT"<<std::endl;
		std::cin.clear();
		std::cin >> input;
		if(!input.compare("ADD"))
		{
			phonebook.addNewContact();
		}
		else if(!input.compare("SEARCH"))
		{
			phonebook.searchContact();
		}
	}
}
