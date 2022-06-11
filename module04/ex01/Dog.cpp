#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor of Dog called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Destructor of Dog called" << std::endl;
	delete brain;
}

Dog::Dog( Dog const & dog ) {
	std::cout << "Copy constructor of Dog called" << std::endl;
	brain = new Brain();
	*this = dog;
}

Dog & Dog::operator=( Dog const & dog ) {
	std::cout << "Assignment operator of Dog called" << std::endl;
	if (this != &dog) {
		this->type = dog.type;
		*brain = *(dog.brain);
	}
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof" << std::endl;
}
