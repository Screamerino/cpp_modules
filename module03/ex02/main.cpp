#include "FragTrap.hpp"
#include <iostream>
int main( void ) {
	std::string name = "aboba";
	FragTrap a(name);
	FragTrap b;
	b = a;
	std::cout << b << std::endl;
	a.attack("zxc");
	a.takeDamage(6);
	std::cout << a << std::endl;
	a.beRepaired(10);
	a.highFivesGuys();
	std::cout << a << std::endl;
	a.takeDamage(11);
	std::cout << a << std::endl;
	a.attack("boby");
	a.beRepaired(100);
	std::cout << a << std::endl;
	ClapTrap *c = new FragTrap;
	delete c;
	return 0;
}
