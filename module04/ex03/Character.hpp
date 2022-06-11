#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter {
public:
    Character();
    Character(std::string name);
    ~Character();
    Character(Character const &);
    Character & operator=(Character const &);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    std::string name;
    AMateria *slot[4];
    int current_size;
};

#endif //CHARACTER_HPP
