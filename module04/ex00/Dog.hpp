#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal {
public:
	Dog( void );
	~Dog( void );
	Dog( Dog const & );
	Dog & operator=( Dog const & );
	void	makeSound( void ) const ;
};

#endif