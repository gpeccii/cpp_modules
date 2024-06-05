#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout<<name<<": ...no longer echoes. Rest in peace.\n";
}

void Zombie::announce() {
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ...\n";
}
