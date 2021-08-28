#include "Brain.hpp"

//Canon
Brain::Brain(void) {
	for (int i = 0 ; i < 100; i++)
	{
		_ideas[i] = "Idea ";  
	}
	std::cout << "A new Brain has been created" << std::endl;
}

Brain::Brain(Brain const &input) {
	std::cout << "You copied a Brain" << std::endl;
	*this = input;
}

Brain::~Brain(void) {
	std::cout << "A brain has been fried" << std::endl;
}

Brain & Brain::operator= (Brain const & rhs)
{
	for (int i = 0; i < 100 ; i++)
		_ideas[i] = rhs._ideas[i];
	return *this;
}


// getter and setter
void Brain::setIdea(int const i, std::string const str)
{
	_ideas[i] = str;
}

std::string Brain::getIdea(int const i) const
{
	return _ideas[i];
}
