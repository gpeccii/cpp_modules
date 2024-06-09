#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &other);
	AMateria	*createMateria(std::string const &type);
	void learnMateria(AMateria *m);
};
#endif
