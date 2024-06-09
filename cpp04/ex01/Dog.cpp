#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog created." << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &toCopy) : Animal(toCopy) {
	this->brain = new Brain(*toCopy.brain);
	std::cout << "Dog copied." << std::endl;
}

Dog& Dog::operator=(const Dog &toCopy) {
	if (this != &toCopy) {
		Animal::operator=(toCopy);
		delete this->brain;
		this->brain = new Brain(*toCopy.brain);
	}
	return *this;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}

Brain *Dog::getBrain() const {
	return brain;
}
