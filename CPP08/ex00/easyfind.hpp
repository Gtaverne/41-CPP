#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <list>
# include <time.h>
# include <stdlib.h>
# include <stdexcept>

class NothingFoundException : public std::exception
{
public:
	char const *what() const throw()
	{
		return("Value not found in vector");
	}
};


template<typename T>
typename T::iterator easyfind (T &tay, int i)
{
	typename T::iterator res = std::find(tay.begin(), tay.end(), i);
	if (res == tay.end())
		throw NothingFoundException();
	return (res);
}

#endif