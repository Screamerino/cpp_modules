#include "ScavTrap.hpp"
#include <iostream>
int main( void ) {
	std::string name = "aboba";
	ScavTrap a(name);
	ScavTrap b(a);
	std::cout << b << std::endl;
	a.attack("zxc");
	a.takeDamage(6);
	std::cout << a << std::endl;
	a.beRepaired(10);
	a.guardGate();
	std::cout << a << std::endl;
	a.takeDamage(11);
	std::cout << a << std::endl;
	a.attack("boby");
	a.beRepaired(100);
	std::cout << a << std::endl;
	return 0;
}

