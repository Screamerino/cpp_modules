#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	std::cout << "Default constructor of Dog called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Destructor of Dog called" << std::endl;
}

Dog::Dog( Dog const & Dog ) {
	std::cout << "Copy constructor of Dog called" << std::endl;
	*this = Dog;
}

Dog & Dog::operator=( Dog const & Dog ) {
	std::cout << "Assignment operator of Dog called" << std::endl;
	if (this != &Dog)
		this->type = Dog.type;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof" << std::endl;
}
