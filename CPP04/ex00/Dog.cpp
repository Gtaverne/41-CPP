#include "Dog.hpp"

//Canon
Dog::Dog(void) {
	std::cout << "A new Dog has been created" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const &input) {
	std::cout << "You copied a Dog" << std::endl;
	*this = input;
}

Dog::~Dog(void) {
	std::cout << "You killed a Dog, you monster" << std::endl;
}

Dog & Dog::operator= (Dog const & rhs)
{
	_type = rhs.getType();
	return *this;
}

//Setter & getter
std::string Dog::getType(void) const {
	return _type ;
}

void Dog::setType(std::string const newtype) {
	_type = newtype ;
}

//Member function
void Dog::makeSound() const{
	std::cout << getType() << " : wouf, wouf <3" << std::endl;
}
