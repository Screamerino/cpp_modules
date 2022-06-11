#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {
	const Animal	*animals[10];
	for (int i = 0; i < 5; ++i)
		animals[i] = new Cat();
	for (int i = 5; i < 10; ++i)
		animals[i] = new Dog();

	for (int i = 0; i < 10; ++i)
		delete animals[i];

	std::cout <<"---------Create one Dog---------" << std::endl;
	const Animal* j = new Dog();
	std::cout << "---------Create one Cat---------" << std::endl;
	const Animal* i = new Cat();
	std::cout << "---------Create copy Cat---------" << std::endl;
	const Animal* copy_i = new Cat(*(Cat*)i); // создание копии кота

	std::cout << "---------Delete copy Cat!--------" << std::endl;
	delete copy_i;
	std::cout << "---------Delete Dog!------------" << std::endl;
	delete j; //should not create a leak
	std::cout << "---------Delete Cat!------------" << std::endl;
	delete i;
	return 0;
}