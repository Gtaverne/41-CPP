#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h> //this lib is used to be c++ 98 compliant on Linux

class Data
{
public:

	Data();
	Data(Data const & src);
	Data & operator=(Data const & rhs);
	virtual ~Data();

	int n;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
std::ostream & operator<<(std::ostream & o, Data const & rhs);


#endif