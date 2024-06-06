#include <iostream>
#include "ClapTrap.hpp"

int main() {
	// Create ClapTrap objects
	ClapTrap clap1("Clap1");
	ClapTrap clap2("Clap2");

	// Test attack function
	clap1.attack("Target1");
	clap2.attack("Target2");

	// Test takeDamage function
	clap1.takeDamage(5);
	clap2.takeDamage(3);

	// Test beRepaired function
	clap1.beRepaired(3);
	clap2.beRepaired(2);

	// Test case when a ClapTrap is dead
	clap1.takeDamage(15);
	clap1.attack("Target1"); // This should display that Clap1 is dead

	return 0;
}
