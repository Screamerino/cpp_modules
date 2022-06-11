#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
public:
	Cat( void );
	~Cat( void );
	Cat( Cat const & );
	Cat & operator=( Cat const & );
	void	makeSound( void ) const ;

private:
	Brain	*brain;
};

#endif