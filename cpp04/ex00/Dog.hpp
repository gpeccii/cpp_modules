#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &toCopy);
	Dog& operator=(const Dog &toCopy);
	~Dog();  // Distruttore virtuale
	void makeSound() const;  // Metodo sovrascritto
	std::string getType() const;  // Metodo sovrascritto
};

#endif
