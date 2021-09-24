#include "Animal.hpp"
#include "Dog.hpp" 
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp" 

int main()
{
	
	//This is from the subject
	{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " (to check the type of j)" << std::endl;
	std::cout << i->getType() << " (to check the type of i)" << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete meta;
	delete i;
	delete j;
	}

	std::cout << std::endl;
	std::cout << "---And the wrong ones---" << std::endl;
	{
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	const WrongCat* m = new WrongCat();
	k->makeSound(); //will output the wrong animal sound!
	l->makeSound(); //No virtual inheritance : the right _type but the wrong sound
	m->makeSound(); //will output the cat sound!
	delete k;
	delete l;
	delete m;
	}
}
