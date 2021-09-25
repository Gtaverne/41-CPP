#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
//this is to generate numbers
# include <stdlib.h>
# include <time.h>

class Span
{
public:
//Exceptions
class AlreadyFullException : public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return ("Exceeding max length");
	}
};

class InvalidSpanException : public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return ("Span is too short");
	}
};

//Canon
	Span();
	Span(Span const & src);
	Span & operator=(Span const & rhs);
	virtual ~Span();

	Span(unsigned int u);

//Getters and setters
	int getLength(void) const;

//Class functions
	void addNumber(int n);
	void addmanyNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
	int shortestSpan(void);
	int longestSpan(void);

private:
	unsigned int _N;
	std::vector<int> _store;
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif
