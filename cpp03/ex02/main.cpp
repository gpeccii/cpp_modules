#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::cout << "\n*** Creating FragTrap ***" << std::endl;
	FragTrap frag("Fraggy");

	std::cout << "\n*** FragTrap High Five ***" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n*** FragTrap Attack ***" << std::endl;
	frag.attack("Target");

	return 0;
}
