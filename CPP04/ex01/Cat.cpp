#include "Cat.hpp"

//Canon
Cat::Cat(void) {
	std::cout << "A new brainy Cat has been created" << std::endl;
	_type = "Cat";
	_catBrain = new Brain;
}

Cat::Cat(Cat const &input) {
	std::cout << "You copied a Cat" << std::endl;
	_catBrain = new Brain(*input._catBrain);
	*this = input;
}

Cat::~Cat(void) {
	delete _catBrain;
	std::cout << "You killed a Cat, that's bad for karma" << std::endl;
}

Cat & Cat::operator= (Cat const & rhs)
{
	_type = rhs.getType();
	delete _catBrain;
	_catBrain =  new Brain(*rhs._catBrain);
	return *this;
}

//Setter & getter
std::string Cat::getType(void) const {
	return _type ;
}

void Cat::setType(std::string const newtype) {
	_type = newtype ;
}

void Cat::setCatIdea(int i, std::string const idea) {
	_catBrain->setIdea(i, idea);
}

std::string Cat::getCatIdea(int i) const {
	return _catBrain->getIdea(i);
}

//Member function
void Cat::makeSound() const {
	std::cout << getType() << " : meow, meow, MEOW" << std::endl;
}
