#include "AMateria.hpp"


AMateria::AMateria(std::string const & type): type(type) {
    std::cout << "Constructor of AMateria with type called" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const {
    return type;
}
