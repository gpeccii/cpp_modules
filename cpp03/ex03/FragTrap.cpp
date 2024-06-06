#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " has been created with default constructor" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap " << this->name << " has been created with copy constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}
