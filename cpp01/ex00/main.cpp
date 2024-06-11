#include "Zombie.hpp"

int	main()
{
	Zombie* zombie = newZombie("foo");
	zombie->announce();
	randomChump("Andy");
	delete(zombie);
}
