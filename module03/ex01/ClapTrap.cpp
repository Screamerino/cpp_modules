#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ):
	name("unnamed"), health(10), energy(10), damage(0), max_hp(10), max_energy(10) {
	std::cout << "Default constructor of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap( std::string & name ):
	name(name), health(10), energy(10), damage(0), max_hp(10), max_energy(10) {
	std::cout << "Constructor of ClapTrap " << name << " called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor of ClapTrap " << name << " called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & clap ) {
	std::cout << "Copy constructor of ClapTrap " << name << " called" << std::endl;
	*this = clap;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & clap ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &clap) {
		this->name = clap.name;
		this->health = clap.health;
		this->energy = clap.energy;
		this->damage = clap.damage;
		this->max_hp = clap.max_hp;
		this->max_energy = clap.max_energy;
	}
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	if (this->health != 0)
		if (this->energy != 0) {
			std::cout << "ClapTrap " << this->name << " attacks " << target <<
				" causing " << this->damage << " points of damage!" << std::endl;
			--this->energy;
		}
		else
			std::cout << "ClapTrap " << this->name << " has no energy" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " already dead" << std::endl;

}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->health != 0) {
		std::cout << "ClapTrap " << this->name << " took " << amount <<
			" points of damage!" << std::endl;
		if (amount >= this->health)
			this->health = 0;
		else
			this->health -= amount;
	}
	else {
		std::cout << "ClapTrap " << this->name << " already dead" << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->health == 0)
		std::cout << "ClapTrap " << this->name << " already dead" << std::endl;
	else if (this->health == this->max_hp)
		std::cout << "ClapTrap " << this->name << " have full hp" << std::endl;
	else if (this->energy == 0)
		std::cout << "ClapTrap " << this->name << " has no energy" << std::endl;
	else {
		std::cout << "ClapTrap " << this->name << " got " << amount <<
			" points of health!" << std::endl;
		if (amount + this->health > this->max_hp)
			this->health = this->max_hp;
		else
			this->health += amount;
		--this->energy;
	}
}

std::string const & ClapTrap::getName( void ) const {
	return this->name;
}
unsigned int		ClapTrap::getHealth( void ) const {
	return this->health;
}
unsigned int		ClapTrap::getEnergy( void ) const {
	return this->energy;
}
unsigned int		ClapTrap::getDamage( void ) const {
	return this->damage;
}


unsigned int		ClapTrap::getMaxEnergy( void ) const {
	return this->max_energy;
}

unsigned int		ClapTrap::getMaxHealth( void ) const {
	return this->max_hp;
}

std::ostream & operator<<( std::ostream & o, ClapTrap const & clap) {
	o << "ClapTrap " << clap.getName() << " have " << clap.getHealth() <<
		" hp, " << clap.getEnergy() << " energy and " << clap.getDamage() <<
		" damage";
	return o;
}
