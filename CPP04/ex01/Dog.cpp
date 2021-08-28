#include "Dog.hpp"

//Canon
Dog::Dog(void) {
	std::cout << "A new brainy Dog has been created" << std::endl;
	_type = "Dog";
	_dogBrain = new Brain;
}

Dog::Dog(Dog const &input) {
	std::cout << "You copied a Dog" << std::endl;
	*this = input;
}

Dog::~Dog(void) {
	delete _dogBrain;
	std::cout << "You killed a Dog, curse you" << std::endl;
}

Dog & Dog::operator= (Dog const & rhs)
{
	_type = rhs.getType();
	delete _dogBrain;
	_dogBrain =  new Brain(*rhs._dogBrain);
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
void Dog::makeSound() const {
	std::cout << getType() << " : Woof wooooooooof <3" << std::endl;
}
