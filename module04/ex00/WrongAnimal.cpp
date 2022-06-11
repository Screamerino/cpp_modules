#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("some weird animal") {
	std::cout << "Default constructor of WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Destructor of WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & animal) {
	std::cout << "Copy constructor of WrongAnimal called" << std::endl;
	*this = animal;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & animal ) {
	std::cout << "Assignment operator of WrongAnimal called" << std::endl;
	if (this != &animal)
		this->type = animal.type;
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Ssssshhhhhh...." << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return this->type;
}

std::ostream & operator<<( std::ostream & o, WrongAnimal const & a ) {
	o << a.getType();
	return o;
}