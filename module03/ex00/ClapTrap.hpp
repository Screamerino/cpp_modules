#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap {
public:
	ClapTrap( std::string & name );
	~ClapTrap( void );
	ClapTrap( ClapTrap const & clap );
	ClapTrap & operator=( ClapTrap const & clap );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	std::string const & getName( void ) const;
	unsigned int		getHealth( void ) const;
	unsigned int		getEnergy( void ) const;
	unsigned int		getDamage( void ) const;

private:
	ClapTrap( void );
	std::string		name;
	unsigned int	max_hp;
	unsigned int	max_energy;
	unsigned int	health;
	unsigned int	energy;
	unsigned int	damage;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & clap);

#endif