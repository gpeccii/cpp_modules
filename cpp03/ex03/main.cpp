#include "DiamondTrap.hpp"

int main()
{
	// Creazione di un oggetto DiamondTrap chiamato "Diamond1"
	DiamondTrap diamond1("Gianmarco");

	std::cout << "\n";

	// Copia di Diamond1 utilizzando il costruttore di copia
	DiamondTrap diamond2 = diamond1;

	std::cout << "\n";

	// Chiamata a metodi su diamond1
	diamond1.whoAmI(); // Chiama il metodo specifico di DiamondTrap
	diamond1.attack("Enemy1");
	diamond1.takeDamage(3);
	diamond1.beRepaired(2);

	std::cout << "\n";

	// Chiamata a metodi su diamond2
	diamond2.whoAmI(); // Chiama il metodo specifico di DiamondTrap
	diamond2.attack("Enemy2");
	diamond2.takeDamage(5);
	diamond2.beRepaired(3);

	std::cout << "\n";

	return 0;
}
