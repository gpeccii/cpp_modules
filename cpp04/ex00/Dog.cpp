#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy) {
	*this = toCopy;
	std::cout << "Dog copied." << std::endl;
}

Dog& Dog::operator=(const Dog &toCopy) {
	if (this != &toCopy) {
		Animal::operator=(toCopy);
		this->type = toCopy.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}
