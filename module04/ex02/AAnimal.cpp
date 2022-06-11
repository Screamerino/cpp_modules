#include "AAnimal.hpp"

AAnimal::AAnimal( void ): type("some weird animal") {
	std::cout << "Default constructor of Animal called" << std::endl;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Destructor of Animal called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & animal) {
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = animal;
}

AAnimal & AAnimal::operator=( AAnimal const & animal ) {
	std::cout << "Assignment operator of Animal called" << std::endl;
	if (this != &animal)
		this->type = animal.getType();
	return *this;
}

std::string 	AAnimal::getType( void ) const {
	return this->type;
}

std::ostream & operator<<( std::ostream & o, AAnimal const & a ) {
	o << a.getType();
	return o;
}