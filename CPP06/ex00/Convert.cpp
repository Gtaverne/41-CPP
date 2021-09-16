#include "Convert.hpp"

//Canon
Convert::Convert()
{
	std::cout << "A nameless Convert been created" << std::endl;
}

Convert::Convert(Convert const & src)
{
	std::cout << "An Convert has been created by copy" << std::endl;
	*this = src;
}

Convert & Convert::operator=(Convert const & rhs) 
{
	(void)rhs;
	return *this;
}

Convert::~Convert()
{
}

//Getters and setters
std::string Convert::getRawstr(void) const
{return (_rawstring);}

void Convert::setRawstr(std::string str)
{_rawstring = str;}

//Class functions
char Convert::charConv()
{

}

int Convert::intConv()
{

}

float Convert::floatConv()
{

}

double Convert::doubleConv()
{
	
}

//Environment functions

std::ostream & operator<<(std::ostream & o, Convert const & rhs)
{
	if (&rhs == NULL)
	{
		std::cout << "CHECK << overriding";
	}
	std::cout << "CHECK IT";
	return o;
}
