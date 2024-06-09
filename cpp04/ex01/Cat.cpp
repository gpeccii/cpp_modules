#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat created." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &toCopy) : Animal(toCopy) {
	this->brain = new Brain(*toCopy.brain);
	std::cout << "Cat copied." << std::endl;
}

Cat& Cat::operator=(const Cat &toCopy) {
	if (this != &toCopy) {
		Animal::operator=(toCopy);
		delete this->brain;
		this->brain = new Brain(*toCopy.brain);
	}
	return *this;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}

Brain *Cat::getBrain() const {
	return brain;
}
