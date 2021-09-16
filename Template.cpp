#include "Template.hpp"

//Canon
Template::Template()
{
	std::cout << "A nameless Template been created" << std::endl;
}

Template::Template(Template const & src)
{
	std::cout << "An Template has been created by copy" << std::endl;
	*this = src;
}

Template & Template::operator=(Template const & rhs) 
{
	(void)rhs;
	return *this;
}

Template::~Template()
{
}

//Getters and setters


//Class functions


//Environment functions

std::ostream & operator<<(std::ostream & o, Template const & rhs)
{
	if (&rhs == NULL)
	{
		std::cout << "CHECK << overriding";
	}
	std::cout << "CHECK IT";
	return o;
}
