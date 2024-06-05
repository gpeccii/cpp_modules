#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
};

Zombie::Zombie(std::string name) {
	this->name = name;
};

Zombie::~Zombie(void) {
	std::cout<<this->name<<": ...no longer echoes. Rest in peace." << std::endl;
};

void Zombie::announce(void) {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName(std::string name) {
	this->name = name;
};
