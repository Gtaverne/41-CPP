#include "Animal.hpp"
#include "Dog.hpp" 
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp" 

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " (to check the type of j)" << std::endl;
	std::cout << i->getType() << " (to check the type of i)" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "---And the wrong ones---" << std::endl;
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	k->makeSound(); //will output the wrong animal sound!
	l->makeSound();

	std::cout << std::endl;
	std::cout << "---Slaughter time---" << std::endl;
	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
}