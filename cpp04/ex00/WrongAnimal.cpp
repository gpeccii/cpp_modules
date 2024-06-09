#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy) {
	*this = toCopy;
	std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &toCopy) {
	if (this != &toCopy) {  // Controllo auto-assegnazione
		this->type = toCopy.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destroyed." << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes a generic sound." << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}
