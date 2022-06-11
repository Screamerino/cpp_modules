#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "Defailt constructor of FragTrap called" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
	this->max_energy = 100;
	this->max_hp = 100;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name) {
	std::cout << "Constructor of FragTrap " << name << " called" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
	this->max_energy = 100;
	this->max_hp = 100;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Destructor of FragTrap " << this->getName() << " called" << std::endl;
}

void FragTrap::attack( const std::string & target ) {
	if (this->getHealth() != 0) {
		if (this->getEnergy() != 0) {
			std::cout << "FragTrap " << this->getName() << " attacks " << target <<
				" causing " << this->getDamage() << " points of damage!" << std::endl;
			this->energy = this->getEnergy() - 1;
		}
		else
			std::cout << "FragTrap " << this->getName() << " has no energy" << std::endl;
	}
	else 
		std::cout << "FragTrap " << this->getName() << " already dead" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	if (this->getHealth() != 0)
		std::cout << "FragTrap " << this->getName() <<
			": 'how about High Fives, guys? ;)'" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " already dead" << std::endl;
}

FragTrap::FragTrap( FragTrap const & clap ) {
	*this = clap;
}

FragTrap & FragTrap::operator=( FragTrap const & trap ) {
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