#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	~DiamondTrap( void );
	DiamondTrap( DiamondTrap const & );
	DiamondTrap & operator=( DiamondTrap const & );
	
	void		attack( const std::string & );
	void		whoAmI( void );

private:
	std::string	name;
};

#endif