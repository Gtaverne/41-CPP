#include "Data.hpp"

//Canon
Data::Data() : n(0)
{
	std::cout << "A nameless Data has been created" << std::endl;
}

Data::Data(Data const & src)
{
	std::cout << "A Data has been created by copy" << std::endl;
	*this = src;
}

Data & Data::operator=(Data const & rhs) 
{
	this->n = rhs.n;
	return *this;
}

Data::~Data()
{
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

std::ostream & operator<<(std::ostream & o, Data const & rhs)
{
	std::cout << "Here is your stored value " << rhs.n ;

	return o;
}
