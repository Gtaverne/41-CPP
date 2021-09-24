#include "Animal.hpp"
#include "Dog.hpp" 
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp" 

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << i->getType() << " (to check the type of i)" << std::endl;
	std::cout << j->getType() << " (to check the type of j)" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;
	std::cout << "---More tests: Animal arrays---" << std::endl;
	{
		Animal *zoo[10];
		for (int i = 0; i < 10; i++)
		{
			if (i%2 == 0)
				zoo[i] = new Cat();
			else
				zoo[i] = new Dog();
		}
		std::cout << "---TEST AN ELEMENT OF THE ARRAY---" << std::endl;
		std::cout << "What is the 4th element ? " << zoo[3]->getType() << std::endl;
		std::cout << "What is the 5th element ? " << zoo[4]->getType() << std::endl; 
		std::cout << "---DELETION OF THE ARRAY---" << std::endl;
		for (int i = 0; i < 10; i++)
			delete zoo[i];
	}


	std::cout << std::endl;
	std::cout << "---More tests---" << std::endl;
	{
		const Cat* k = new Cat();
		Cat miaouss;
		Cat Bob;
		miaouss.makeSound();
		std::cout << "What is miaouss: a " << miaouss.getType() << std::endl;
		Bob = miaouss;
		// ici, on teste qu'on peut modifier miaouss sans modifier Bob, il s'agit bien d'une deep copy
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
		Cat *miaouss = new Cat(); //if we set ideas, it cannot be of type const
		std::cout << "Miaouss has a generic brain" << std::endl << "Print the first 5" << std::endl;
		for (int n = 0; n < 5; n++)
			std::cout << miaouss->getCatIdea(n) << std::endl;
		miaouss->setCatIdea(2, "I want pikachu");
		std::cout << "Miaouss got a new idea" << std::endl << "Print the first 5" << std::endl;
		for (int n = 0; n < 5; n++)
			std::cout << miaouss->getCatIdea(n) << std::endl;
		delete miaouss;
	}

	std::cout << std::endl;
	std::cout << "---Slaughter time---" << std::endl;


	//Example of shallow copy
	// int a = 42;
	// int *ptr = &a;
	// {
	// 	int *tmp = ptr;
	// 	std::cout << *tmp << std::endl;
	// 	*tmp = 0;
	// }
	// std::cout << a << std::endl;
	// a = 41;
	// {
	// 	int *tmp = new(int);
	// 	*tmp = *ptr ;
	// 	std::cout << *tmp << std::endl;
	// 	*tmp = 0;
	// 	delete tmp;
	// }
	// std::cout << a << std::endl;
}
