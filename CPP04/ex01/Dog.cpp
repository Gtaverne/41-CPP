#include "Dog.hpp"

//Canon
Dog::Dog(void) {
	std::cout << "A new brainy Dog has been created" << std::endl;
	_type = "Dog";
	_DogBrain = new Brain;
}

Dog::Dog(Dog const &input) {
	std::cout << "You copied a Dog" << std::endl;
	_DogBrain = new Brain(*input._DogBrain);
	*this = input;
}

Dog::~Dog(void) {
	delete _DogBrain;
	std::cout << "You killed a Dog, you monster" << std::endl;
}

Dog & Dog::operator= (Dog const & rhs)
{
	_type = rhs.getType();
	delete _DogBrain;
	_DogBrain =  new Brain(*rhs._DogBrain);
	return *this;
}

//Setter & getter
void Dog::setDogIdea(int i, std::string const idea) {
	_DogBrain->setIdea(i, idea);
}

std::string Dog::getDogIdea(int i) const {
	return _DogBrain->getIdea(i);
}

//Member function
void Dog::makeSound() const {
	std::cout << getType() << " : Wooh wooh <3" << std::endl;
}
