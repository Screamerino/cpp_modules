#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->type = "WrongCat";
	std::cout << "Default constructor of WrongCat called" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Destructor of WrongCat called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & cat ) {
	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = cat;
}

WrongCat & WrongCat::operator=( WrongCat const & cat ) {
	std::cout << "Assignment operator of WrongCat called" << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}
