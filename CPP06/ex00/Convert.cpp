#include "Convert.hpp"

//Canon
Convert::Convert()
{
	//std::cout << "" << std::endl;
}

Convert::Convert(Convert const & src)
{
	//std::cout << "An Convert has been created by copy" << std::endl;
	*this = src;
}

Convert & Convert::operator=(Convert const & rhs) 
{
	this->_rawstring = rhs.getRawstr();
	return *this;
}

Convert::~Convert()
{
}

Convert::Convert(std::string str) : _rawstring(str)
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
	if (this->isValid())
	{
		int i;
		try
		{
			i = this->intConv();	
		}
		catch(const std::exception& e)
		{
			throw (Convert::impossibleException());
			return 0;
		}
		if (i < 0 || i > 127)
		{
			throw (Convert::impossibleException());
			return 0;
		}
		if (i < ' ' || i > '~')
		{
			throw (Convert::nonDisplayableException());
			return 0;
		}
		return static_cast<char>(i);
	}
	if (this->_rawstring.length() > 1)
	{
		throw Convert::impossibleException();
		return 0;
	}
	char c = static_cast<char>(_rawstring[0]);
	if (c < ' ' || c > '~')
	{
		throw (Convert::nonDisplayableException());
		return 0;
	}
	return (c);
}

int Convert::intConv()
{
	double i;
	try
	{
		i = static_cast<double>(std::strtod(_rawstring.c_str(), NULL));
		if (i <= -2147483648 || i >= 2147483647) {
			throw Convert::impossibleException();
			return 0;
		}
		return static_cast<int>(i);
	}
	catch(const std::invalid_argument& e)
	{
		throw Convert::impossibleException();
	}
	catch (const std::out_of_range& e)
	{
		throw Convert::impossibleException();
	}
	return 0;
}

float Convert::floatConv()
{
	float f;

	try
	{
		f = static_cast<float>(std::strtof(_rawstring.c_str(), NULL));
		return f;
	}
	catch(const std::invalid_argument& e)
	{
		throw Convert::impossibleException();
	}
	catch (const std::out_of_range& e)
	{
		throw Convert::impossibleException();
	}
	return 0;
}

double Convert::doubleConv()
{
	double d;

	try
	{
		d = static_cast<double>(std::strtod(_rawstring.c_str(), NULL));
		return d;
	}
	catch(const std::invalid_argument& e)
	{
		throw Convert::impossibleException();
	}
	catch (const std::out_of_range& e)
	{
		throw Convert::impossibleException();
	}
	return 0;
}

bool Convert::isValid()
{
	std::string validchar = "0123456789.f-";

	for (int i = 0 ; _rawstring[i]; i++)
	{
		if(validchar.find(_rawstring[i]) == std::string::npos)
			return (false);
	}
	//std::cout << "We have ints to convert to char" << std::endl;
	return (true);
}

//Environment functions

std::ostream & operator<<(std::ostream & o, Convert const & rhs)
{
	std::cout << rhs.getRawstr();
	return o;
}
