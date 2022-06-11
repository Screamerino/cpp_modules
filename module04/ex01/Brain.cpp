#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default constructor of Brain called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Destructor of Brain called" << std::endl;
}

Brain::Brain( Brain const & brain ) {
	std::cout << "Copy constructor of Brain called" << std::endl;
	*this = brain;
}

Brain & Brain::operator=( Brain const & brain ) {
	std::cout << "Assignment operator of Brain called" << std::endl;
	if (this != &brain) {
		for (int i = 0; i < 100; ++i)
			ideas[i] = brain.ideas[i];
	}
	return *this;
}