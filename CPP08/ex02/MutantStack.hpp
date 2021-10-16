# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>() {};
	MutantStack(MutantStack const & src) {*this = src;}
	virtual ~MutantStack() {};
	MutantStack &operator=(const MutantStack &rhs)
	{
		this->std::stack<T>::operator=(rhs);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void)
	{
		return (this->c.begin());
	}
	iterator end(void)
	{
		return (this->c.end());
	}

private:

};


#endif