#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int arraySize = 6;

	Animal *animalArray[arraySize];

	std::cout<<"Creating the array of dog and cat"<<std::endl;

	for (int i = 0; i < arraySize / 2; i++) {
		animalArray[i] = new Dog();
	}

	for (int i = arraySize / 2; i < arraySize; i++) {
		animalArray[i] = new Cat();
	}

	Dog basic;
	{
		basic.getBrain()->setIdea(0, "Old idea");
		Dog tmp = basic;
		// Modifica l'idea del cervello di tmp
		tmp.getBrain()->setIdea(0, "New idea");
		std::cout << "Tmp brain idea: " << tmp.getBrain()->getIdea(0) << std::endl;
	}
	// Stampa l'idea del cervello di basic
	std::cout << "Basic brain idea: " << basic.getBrain()->getIdea(0) << std::endl;


	std::cout<<"Delete of Animal\n"<<std::endl;
	for (int i = 0; i < arraySize; i++)
	{
		delete animalArray[i];
	}

	return 0;
}
