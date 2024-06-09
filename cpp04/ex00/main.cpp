#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* z= new WrongCat();
	std::cout << z->getType() << " " << std::endl;
	z->makeSound(); //will output the cat sound! j->makeSound();
	meta2->makeSound();

	delete meta;
	delete i;
	delete j;
	delete meta2;
	delete z;

	return 0;
}
