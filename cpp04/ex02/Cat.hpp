#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain* brain;

public:
	Cat();
	Cat(const Cat &toCopy);
	Cat& operator=(const Cat &toCopy);
	~Cat();

	void makeSound() const;
	std::string getType() const;
	Brain* getBrain() const;
};

#endif
