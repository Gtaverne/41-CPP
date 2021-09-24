#include "Cat.hpp"

//Canon
Cat::Cat(void) {
	std::cout << "A new Cat has been created" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const &input) {
	std::cout << "You copied a Cat" << std::endl;
	*this = input;
}

Cat::~Cat(void) {
	std::cout << "You killed a Cat, curse you" << std::endl;
}

Cat & Cat::operator= (Cat const & rhs)
{
	_type = rhs.getType();
	return *this;
}

//Setter & getter

//Member function
void Cat::makeSound() const {
	std::cout << getType() << " : meow, meow, MEOW" << std::endl;
}
