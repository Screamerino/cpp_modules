#include "Character.hpp"


Character::Character(): name("Chosen One"), current_size(0) {
    std::cout << "Default constructor of Character called" << std::endl;
    for (int i = 0; i < 4; i++)
        slot[i] = 0;
}

Character::Character(std::string name): name(name), current_size(0) {
    std::cout << "Constructor of Character " << name << " called" << std::endl;
    for (int i = 0; i < 4; i++)
        slot[i] = 0;
}

Character::~Character() {
    for (int i = 0; i < current_size; ++i)
        delete slot[i];
    std::cout << "Destructor of Character called" << std::endl;
}

Character::Character(Character const &a) {
    std::cout << "Copy constructor of Character called" << std::endl;
    *this = a;
}

Character & Character::operator=(const Character &a) {
    if (this != &a) {
        for (int i = 0; i < current_size; ++i)
            delete slot[i];
        for (int i = 0; i < a.current_size; ++i)
            slot[i] = a.slot[i]->clone();
        name = a.getName();
        current_size = a.current_size;
    }
    return *this;
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    if (current_size != 4) {
        int i = 0;
        while (slot[i])
            ++i;
        slot[i] = m;
        ++current_size;
    }
}

void Character::unequip(int idx) {
    if (slot[idx]) {
        slot[idx] = 0;
        --current_size;
    }
}

void Character::use(int idx, ICharacter &target) {
    std::cout << "Character " << name << " use materia" << std::endl;
    if (slot[idx])
        slot[idx]->use(target);
}
