#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int arraySize = 6;

	AAnimal *animalArray[arraySize];

	std::cout<<"Creating the array of dog and cat"<<std::endl;

	for (int i = 0; i < arraySize / 2; i++) {
		animalArray[i] = new Dog();
	}

	for (int i = arraySize / 2; i < arraySize; i++) {
		animalArray[i] = new Cat();
	}

	std::cout<<"Deep Copy Verify\n"<<std::endl;

	Dog basic; {
		basic.getBrain()->setIdea(0, "Original Idea");
		Dog tmp = basic;
		tmp.getBrain()->setIdea(0, "Modified Idea");
		std::cout<<"Idea of tmp: "<<tmp.getBrain()->getIdea(0)<<std::endl;
	}

	// Stampa il contenuto dell'idea dell'oggetto basic per verificare la deep copy
	std::cout << "Basic brain idea: " << basic.getBrain()->getIdea(0) << std::endl;

	std::cout<<"Delete of Animal\n"<<std::endl;
	for (int i = 0; i < arraySize; i++) {
		delete animalArray[i];
	}

	return 0;
}
