#include "Convert.hpp"

//Canon
Convert::Convert() : _rawdata(0) {}

Convert::Convert(Convert const & src) {	*this = src; }

Convert & Convert::operator=(Convert const & rhs) 
{
	this->_rawdata = rhs._rawdata;
	return *this;
}

Convert::~Convert() {}

Convert::Convert(std::string str) : _rawdata(atof(str.c_str())), _c(0)
{
	if (_rawdata == 0 && str[0] != 0 && str[1] == 0)
		_c = str[0];
}
// https://en.cppreference.com/w/cpp/string/byte/atof

//Printers
void Convert::Charprint(std::ostream & o, Convert const & rhs) const
{
	o << "char: ";
	try
	{
		char c = rhs.charConv();
		if (std::isprint(c))
			o << "'" << c << "'";
		else
			throw Convert::nonDisplayableException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	o << std::endl;
}

void Convert::Intprint(std::ostream & o, Convert const & rhs) const
{
	o << "int: ";
	try
	{
		int i = rhs.intConv();
		o << i;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	o << std::endl;
}

void Convert::Floatprint(std::ostream & o, Convert const & rhs) const
{
	o << "float: ";
	try
	{
		float f = rhs.floatConv();
		if (abs(f) < 1000000 && abs((f - static_cast<int>(f)) * 10000) < 1)
			o << std::fixed << std::setprecision(1) << f << "f";
		else
			o << f << "f";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	o << std::endl;
}

void Convert::Doubleprint(std::ostream & o, Convert const & rhs) const
{
	o << "double: ";
	try
	{
		double d = rhs.doubleConv();
		o << d;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

//Class converters
char Convert::charConv(void) const
{
	if (isnan(this->_rawdata))
		throw Convert::impossibleException();
	if (static_cast<char>(this->_rawdata) == 0 && _c != 0)
		return (_c);
	return (static_cast<char>(this->_rawdata));
}

int Convert::intConv(void) const
{
	if (isnan(this->_rawdata))
		throw Convert::impossibleException();
	return (static_cast<int>(this->_rawdata));
}

float Convert::floatConv(void) const
{
	return (static_cast<float>(this->_rawdata));
}

double Convert::doubleConv(void) const
{
	return (this->_rawdata);
}

//Environment functions

std::ostream & operator<<(std::ostream & o, Convert const & rhs)
{
	rhs.Charprint(o, rhs);
	rhs.Intprint(o, rhs);
	rhs.Floatprint(o, rhs);
	rhs.Doubleprint(o, rhs);

	return o;
}
