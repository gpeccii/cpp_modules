#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &toCopy);
	Cat& operator=(const Cat &toCopy);
	~Cat();
	void makeSound() const;  // Metodo sovrascritto
	std::string getType() const;  // Metodo sovrascritto
};

#endif
