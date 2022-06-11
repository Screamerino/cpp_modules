#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & trap );
	~FragTrap( void );
	FragTrap & operator=( FragTrap const & trap );

	void	attack( const std::string & target );
	void	highFivesGuys( void );

};


#endif