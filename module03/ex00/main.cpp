#include "ClapTrap.hpp"
#include <iostream>
int main( void ) {
	std::string name = "aboba";
	ClapTrap a(name);
	ClapTrap b = a;
	std::cout << b << std::endl;
	b.takeDamage(1);
	std::cout << b << std::endl;
	a.attack("zxc");
	a.takeDamage(6);
	std::cout << a << std::endl;
	a.beRepaired(10);
	std::cout << a << std::endl;
	a.takeDamage(11);
	std::cout << a << std::endl;
	a.attack("boby");
	a.beRepaired(100);
	std::cout << a << std::endl;
	return 0;
}
