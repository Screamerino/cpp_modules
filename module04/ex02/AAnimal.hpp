#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>

class AAnimal {
public:
	AAnimal( void );
	virtual ~AAnimal( void );
	AAnimal( AAnimal const & );
	AAnimal & operator=( AAnimal const & );
	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;

protected:
	std::string	type;
};

std::ostream & operator<<( std::ostream & o, AAnimal const & a );

#endif