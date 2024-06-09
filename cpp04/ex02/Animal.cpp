#include "Animal.hpp"

AAnimal::AAnimal() {
	this->type = "Animal";
}

AAnimal::AAnimal(const AAnimal &toCopy) {
	*this = toCopy;
	std::cout << "Animal copied." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &toCopy) {
	if (this != &toCopy) {
		this->type = toCopy.type;
	}
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destroyed." << std::endl;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makes a sound." << std::endl;
}

std::string AAnimal::getType() const {
	return this->type;
}

