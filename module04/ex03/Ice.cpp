#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
    std::cout << "Default constructor of Ice called" << std::endl;
}

Ice::~Ice() {
    std::cout << "Destructor of Ice called" << std::endl;
}

Ice::Ice(const Ice &a): AMateria(a.type) {
    std::cout << "Copy constructor of Ice called" << std::endl;
    *this = a;
}

Ice & Ice::operator=(Ice const & a) {
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName()
        << " *" << std::endl;
}