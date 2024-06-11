#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat created." << std::endl;

}

Cat::Cat(const Cat &toCopy) : Animal(toCopy) {
	*this = toCopy;
	std::cout << "Cat copied." << std::endl;
}

Cat& Cat::operator=(const Cat &toCopy) {
	if (this != &toCopy) {  // Controllo auto-assegnazione
		Animal::operator=(toCopy);  // Assegnazione della classe base
		this->type = toCopy.type;   // Assegnazione del membro specifico
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}
