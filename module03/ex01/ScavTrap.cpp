#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "Defailt constructor of ScavTrap called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
	this->max_energy = 50;
	this->max_hp = 100;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name) {
	std::cout << "Constructor of ScavTrap " << name << " called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
	this->max_energy = 50;
	this->max_hp = 100;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor of ScavTrap " << this->getName() << " called" << std::endl;
}

void ScavTrap::attack( const std::string & target ) {
	if (this->getHealth() != 0) {
		if (this->getEnergy() != 0) {
			std::cout << "ScavTrap " << this->getName() << " attacks " << target <<
				" causing " << this->getDamage() << " points of damage!" << std::endl;
			this->energy = this->getEnergy() - 1;
		}
		else
			std::cout << "ScavTrap " << this->getName() << " has no energy" << std::endl;
	}
	else 
		std::cout << "ScavTrap " << this->getName() << " already dead" << std::endl;
}

void ScavTrap::guardGate( void ) {
	if (this->getHealth() != 0)
		std::cout << "ScavTrap " << this->getName() <<
			" is now in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " already dead" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & clap ) {
	*this = clap;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & trap ) {
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