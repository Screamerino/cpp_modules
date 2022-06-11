#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void ) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << *j << std::endl;
	std::cout << *i << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	const WrongAnimal *pepega = new WrongCat();
	std::cout << *pepega << std::endl;
	pepega->makeSound();
	delete pepega;

	return 0;
}