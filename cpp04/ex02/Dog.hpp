#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain* brain;

public:
	Dog();
	Dog(const Dog &toCopy);
	Dog& operator=(const Dog &toCopy);
	~Dog();

	void makeSound() const;
	std::string getType() const;
	Brain* getBrain() const;
};

#endif
