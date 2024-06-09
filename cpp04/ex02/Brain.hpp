#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
public:
	std::string ideas[100];

	Brain();
	Brain(const Brain &toCopy);
	Brain& operator=(const Brain &toCopy);
	~Brain();

	void setIdea(int index, std::string idea);
	std::string getIdea(int index);
};

#endif
