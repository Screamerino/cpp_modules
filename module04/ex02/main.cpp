#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << *j << std::endl;
	std::cout << *i << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;


	return 0;
}