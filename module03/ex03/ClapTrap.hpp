#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap {
public:
	ClapTrap( void );
	ClapTrap( std::string & name );
	virtual ~ClapTrap( void );
	ClapTrap( ClapTrap const & clap );
	ClapTrap & operator=( ClapTrap const & clap );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	std::string const & getName( void ) const;
	unsigned int		getHealth( void ) const;
	unsigned int		getEnergy( void ) const;
	unsigned int		getDamage( void ) const;
	unsigned int		getMaxEnergy( void ) const;
	unsigned int		getMaxHealth( void ) const;

protected:
	std::string		name;
	unsigned int	max_hp;
	unsigned int	max_energy;
	unsigned int	health;
	unsigned int	energy;
	unsigned int	damage;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & clap);

#endif