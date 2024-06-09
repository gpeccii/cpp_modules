#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &toCopy);
	WrongCat& operator=(const WrongCat &toCopy);
	~WrongCat();

	void makeSound() const;  // Sovrascrittura (non virtuale)
};

#endif
