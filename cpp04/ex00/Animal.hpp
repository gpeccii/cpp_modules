#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &toCopy);
	Animal& operator=(const Animal &toCopy);
	virtual ~Animal();

	virtual void makeSound() const; // Metodo virtuale
	virtual std::string getType() const; // Metodo virtuale
};

#endif
