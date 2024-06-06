#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
	using FragTrap::hitPoints;
	using ScavTrap::energyPoints;
	using FragTrap::attackDamage;
public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &toCopy);
	DiamondTrap&	operator=(const DiamondTrap &tocopy);
	~DiamondTrap();
	void whoAmI();
};

#endif
