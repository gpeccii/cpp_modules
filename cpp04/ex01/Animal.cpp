#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
	std::cout<<"Animal created"<<std::endl;
}

Animal::Animal(const Animal &toCopy) {
	*this = toCopy;
	std::cout << "Animal copied." << std::endl;
}

Animal& Animal::operator=(const Animal &toCopy) {
	if (this != &toCopy) {
		this->type = toCopy.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destroyed." << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a sound." << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

