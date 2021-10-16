#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>

// Containers of ints can be vector, array, deque, map...
// end() and begin() are present everywhere but in container adaptors
// http://www.cplusplus.com/reference/stl/
# include <vector>
# include <deque>
# include <list>
# include <stack>
# include <set>
# include <map>
# include <time.h>
# include <stdlib.h>
# include <stdexcept>



class NothingFoundException : public std::exception
{
public:
	char const *what() const throw()
	{
		return("Value not found in data");
	}
};

//"find" is a member of <algorithm>
// http://www.cplusplus.com/reference/algorithm/find/?kw=find


template<typename T>
typename T::iterator easyfind (T &tay, int i)
{
	typename T::iterator res = std::find(tay.begin(), tay.end(), i);
	if (res == tay.end())
		throw NothingFoundException();
	return (res);
}

#endif