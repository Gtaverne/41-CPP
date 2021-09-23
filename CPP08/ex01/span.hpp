#ifndef Span_HPP
# define Span_HPP

# include <iostream>

class Span
{
public:
//Exceptions

//Canon
	Span();
	Span(Span const & src);
	Span & operator=(Span const & rhs);
	virtual ~Span();

//Getters and setters


//Class functions
	
private:

};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif
