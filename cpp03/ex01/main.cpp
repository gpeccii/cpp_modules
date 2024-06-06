#include <iostream>
#include "ScavTrap.hpp"

int main() {
	std::cout << "Creating ScavTrap..." << std::endl;
	ScavTrap scavTrap("Scavvy");

	std::cout << "Calling attack()..." << std::endl;
	scavTrap.attack("Target");

	std::cout << "Calling guardGate()..." << std::endl;
	scavTrap.guardGate();

	std::cout << "Taking damage..." << std::endl;
	scavTrap.takeDamage(50);

	std::cout << "Being repaired..." << std::endl;
	scavTrap.beRepaired(30);

	return 0;
}
