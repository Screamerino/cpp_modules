#include "Animal.hpp"

Animal::Animal( void ): type("some weird animal") {
	std::cout << "Default constructor of Animal called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Destructor of Animal called" << std::endl;
}

Animal::Animal( Animal const & animal) {
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = animal;
}

Animal & Animal::operator=( Animal const & animal ) {
	std::cout << "Assignment operator of Animal called" << std::endl;
	if (this != &animal)
		this->type = animal.getType();
	return *this;
}

void	Animal::makeSound( void ) const {
	std::cout << "Ssssshhhhhh...." << std::endl;
}

std::string 	Animal::getType( void ) const {
	return this->type;
}

std::ostream & operator<<( std::ostream & o, Animal const & a ) {
	o << a.getType();
	return o;
}