#include "AAnimal.hpp"
#include "Dog.hpp" 
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp" 

int main()
{
	//if you try to create meta, it will crash
	//const AAnimal* meta = new AAnimal();
	const AAnimal* i = new Cat();
	const AAnimal* j = new Dog();
	std::cout << i->getType() << " (to check the type of i)" << std::endl;
	std::cout << j->getType() << " (to check the type of j)" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

/*
	std::cout << std::endl;
	std::cout << "---More tests---" << std::endl;
	{
		const Cat* k = new Cat();
		Cat miaouss;
		Cat Bob;
		miaouss.makeSound();
		std::cout << "What is miaouss: a " << miaouss.getType() << std::endl;
		miaouss.setType("Not a cat");
		std::cout << "What is miaouss now: " << miaouss.getType() << std::endl;
		miaouss = Bob;
		miaouss.makeSound();
		std::cout << "What about now: " << miaouss.getType() << std::endl << std::endl;
		Cat Bill(*k);
		std::cout << "---Slaughter time---" << std::endl;
		delete k;
	}


	std::cout << std::endl;
	std::cout << "---Even more tests---" << std::endl;
	{
		Cat miaouss;
		for (int n = 0; n < 5; n++)
			std::cout << miaouss.getCatIdea(n) << std::endl;
		miaouss.setCatIdea(2, "I want pikachu");
		std::cout << "Miaouss got a new idea" << std::endl;
		for (int n = 0; n < 5; n++)
			std::cout << miaouss.getCatIdea(n) << std::endl;
	}
*/

	std::cout << std::endl;
	std::cout << "---Slaughter time---" << std::endl;
	delete i;
	delete j;
}
