#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
public:
	Animal( void );
	virtual ~Animal( void );
	Animal( Animal const & );
	Animal & operator=( Animal const & );
	virtual void	makeSound( void ) const;
	std::string		getType( void ) const;

protected:
	std::string	type;
};

std::ostream & operator<<( std::ostream & o, Animal const & a );

#endif