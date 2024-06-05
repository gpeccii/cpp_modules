#include "Zombie.hpp"

int	main()
{
	int N = 10;
	Zombie *horde = zombieHorde(N,"Bob");
	delete [] horde;
}
