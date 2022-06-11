#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap(), name("unnamed") {
	std::cout << "Defailt constructor of DiamondTrap called" << std::endl;
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
	this->max_energy = ScavTrap::energy;
	this->max_hp = FragTrap::health;
	ClapTrap::name = "unnamed_clap_name";
}

DiamondTrap::DiamondTrap( std::string name ): ScavTrap(name), FragTrap(name), name(name) {
	std::cout << "Constructor of DiamondTrap " << name << " called" << std::endl;
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
	this->max_energy = ScavTrap::energy;
	this->max_hp = FragTrap::health;
	ClapTrap::name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Destructor of DiamondTrap " << this->getName() << " called" << std::endl;
}

void DiamondTrap::attack( const std::string & target ) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap name '" << this->name << "' and ClapTrap name '"
		<< ClapTrap::name << "'" << std::endl; 
}

DiamondTrap::DiamondTrap( DiamondTrap const & clap ) {
	*this = clap;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & trap ) {
	if (this != &trap) {
		this->name = trap.getName();
		this->health = trap.getHealth();
		this->energy = trap.getEnergy();
		this->damage = trap.getDamage();
		this->max_energy = trap.getMaxEnergy();
		this->max_hp = trap.getMaxHealth();
	}
	return *this;
}
