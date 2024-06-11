#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " created with default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy), name(toCopy.name) {
	std::cout << "DiamondTrap " << name << " has been created with copy constructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy) {
	if (this != &toCopy) {
		// Non è necessario assegnare esplicitamente gli attributi, lasciamo che gli operatori di assegnazione delle classi base facciano il loro lavoro
		ClapTrap::operator=(toCopy);
		ScavTrap::operator=(toCopy);
		FragTrap::operator=(toCopy);
		name = toCopy.name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "Who am I? I'm " << name << " but my real name is " << ClapTrap::name << std::endl;
}
