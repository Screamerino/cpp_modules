#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	std::cout << "Default constructor of Cat called" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Destructor of Cat called" << std::endl;
}

Cat::Cat( Cat const & cat ) {
	std::cout << "Copy constructor of Cat called" << std::endl;
	*this = cat;
}

Cat & Cat::operator=( Cat const & cat ) {
	std::cout << "Assignment operator of Cat called" << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}
