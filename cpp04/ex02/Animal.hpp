#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const AAnimal &toCopy);
	AAnimal& operator=(const AAnimal &toCopy);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	virtual std::string getType() const = 0;
};

#endif
