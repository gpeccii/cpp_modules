#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain &toCopy) {
	*this = toCopy;
	std::cout << "Brain copied." << std::endl;
}

Brain& Brain::operator=(const Brain &toCopy) {
	if (this != &toCopy) {
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = toCopy.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destroyed." << std::endl;
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) {
	return ideas[index];
}
