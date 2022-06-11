#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    size = 0;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < size; ++i)
        delete materias[i];
    std::cout << "Delete MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &a) {
    *this = a;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &a) {
    if (this != &a) {
        for (int i = 0; i < size; ++i)
            materias[i] = a.materias[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *a) {
    if (size != 4) {
        materias[size] = a;
        ++size;
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < size; ++i) {
        if (materias[i]->getType() == type)
            return materias[i]->clone();
    }
    return 0;
}