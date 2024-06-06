#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name) {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " has been created with default constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << "ClapTrap " << this->name << " has been created with copy constructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is dead and cannot attack" << std::endl;
		return;
	}
	if (energyPoints >= 1) {
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "ClapTrap " << this->name << " has no energy left for attack" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return;
	}

	hitPoints -= amount;
	if (hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage. Hit points left: " << hitPoints << std::endl;
	} else {
		hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " is dead because it took too much damage" << std::endl;
	}
}


void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints >= 1 && hitPoints != 0) {
		this->energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount << " hit points. New hit points: " << hitPoints << std::endl;
	} else if (hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " has not enough energy left for repair" << std::endl;
	}
}
