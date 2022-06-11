#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &a);
    MateriaSource & operator=(MateriaSource const &a);
    void learnMateria(AMateria *a);
    AMateria* createMateria(std::string const & type);
private:
    AMateria *materias[4];
    int size;
};


#endif //MATERIASOURCE_HPP
