#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

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

#endif