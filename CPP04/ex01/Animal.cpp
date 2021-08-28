#include "Animal.hpp"

//Canon
Animal::Animal(void) {
	std::cout << "A new animal has been created" << std::endl;
	_type = "None";
}

Animal::Animal(Animal const &input) {
	std::cout << "You copied an animal" << std::endl;
	*this = input;
}

Animal::~Animal(void) {
	std::cout << "You killed an animal :-(" << std::endl;
}

Animal & Animal::operator= (Animal const & rhs)
{
	_type = rhs.getType();
	return *this;
}

//Setter & getter
std::string Animal::getType(void) const {
	return _type ;
}

void Animal::setType(std::string const newtype) {
	_type = newtype ;
}

//Member function
void Animal::makeSound() const {
	std::cout << getType() << ": for now, I have nothing to say" << std::endl;
}
