#include "span.hpp"

//Canon
Span::Span() : _N(0)
{}

Span::Span(Span const & src)
{
	std::cout << "An Span has been created by copy" << std::endl;
	*this = src;
}

Span & Span::operator=(Span const & rhs) 
{
	this->_store = rhs._store;
	this->_N = rhs._N;
	return *this;
}

Span::~Span()
{
}

Span::Span(unsigned int u) : _N(u)
{}

//Getters and setters
int Span::getLength(void) const
{
	return (_N);
}

//Class functions
void Span::addNumber(int n)
{
	if (this->_store.size() < this->_N)
		this->_store.push_back(n);
	else
		throw (AlreadyFullException());	
}

void Span::addmanyNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	if (this->_store.size() + (end - begin) <= this->_N)
	{
		while (begin < end)
		{
			this->_store.push_back(*begin);
			begin++;
		}
	}
	else
		throw (AlreadyFullException());	
}


int Span::shortestSpan(void)
{
	if (this->_store.size() < 2)
		throw (InvalidSpanException());
	std::vector<int>tosort = this->_store;
	std::sort(tosort.begin(), tosort.end());
	std::vector<int>diff = tosort;
	for (unsigned long i = 0; i < this->_store.size() - 1; i++)
		tosort[i] = tosort[i+1] - tosort[i];
	return (*std::min_element(tosort.begin(), tosort.end() - 1));

}

int Span::longestSpan(void)
{
	if (this->_store.size() < 2)
		throw (InvalidSpanException());
	return (*std::max_element(this->_store.begin(), this->_store.end()) - *std::min_element(this->_store.begin(), this->_store.end()));
}

//Environment functions

std::ostream & operator<<(std::ostream & o, Span const & rhs)
{
	
	std::cout << "Span: length = " << rhs.getLength() << std::endl;
	return o;
}
