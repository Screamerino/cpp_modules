#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
    std::cout << "Default constructor of Cure called" << std::endl;
}

Cure::~Cure() {
    std::cout << "Destructor of Cure called" << std::endl;
}

Cure::Cure(Cure const &a): AMateria(a.type) {
    std::cout << "Copy constructor of Cure called" << std::endl;
    *this = a;
}

Cure & Cure::operator=(const Cure &) {
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}
