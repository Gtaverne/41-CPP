#include "span.hpp"

//Canon
Span::Span()
{
	std::cout << "A nameless Span been created" << std::endl;
}

Span::Span(Span const & src)
{
	std::cout << "An Span has been created by copy" << std::endl;
	*this = src;
}

Span & Span::operator=(Span const & rhs) 
{
	(void)rhs;
	return *this;
}

Span::~Span()
{
}

//Getters and setters


//Class functions
void Span::addNumber(int n)
{
	
}

//Environment functions

std::ostream & operator<<(std::ostream & o, Span const & rhs)
{
	if (&rhs == NULL)
	{
		std::cout << "CHECK << overriding";
	}
	std::cout << "CHECK IT";
	return o;
}
