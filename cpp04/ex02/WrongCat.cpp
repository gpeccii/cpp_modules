#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &toCopy) : WrongAnimal(toCopy) {
	*this = toCopy;
	std::cout << "WrongCat copied." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &toCopy) {
	if (this != &toCopy) {  // Controllo auto-assegnazione
		WrongAnimal::operator=(toCopy);  // Assegnazione della classe base
		this->type = toCopy.type;   // Assegnazione del membro specifico
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Roar Roar" << std::endl;  // Usa il suono di WrongAnimal
}
