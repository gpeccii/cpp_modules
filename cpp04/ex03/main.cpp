# include <iostream>
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("Gianmarco");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* yugi = new Character("Yugi");

	me->use(0, *yugi);
	me->use(1, *yugi);

	delete yugi;
	delete me;
	delete src;

	return 0;
}
