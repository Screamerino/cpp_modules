#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal {
public:
	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal( WrongAnimal const & );
	WrongAnimal & operator=( WrongAnimal const & );
	void	makeSound( void ) const;
	std::string	getType( void ) const;
protected:
	std::string	type;
};

std::ostream & operator<<( std::ostream & o, WrongAnimal const & a );


#endif