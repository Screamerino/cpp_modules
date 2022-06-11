#include "DiamondTrap.hpp"
#include <iostream>

int main( void ) {
	std::string name = "aboba";
	DiamondTrap a(name);
	std::string enemy = "kek";
	a.attack(enemy);
	a.whoAmI();
	return 0;
}
