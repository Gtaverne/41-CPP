#ifndef Template_HPP
# define Template_HPP

# include <iostream>

class Template
{
public:
//Canon
	Template();
	Template(Template const & src);
	Template & operator=(Template const & rhs);
	virtual ~Template();

//Getters and setters


//Class functions
	
private:

};

std::ostream & operator<<(std::ostream & o, Template const & rhs);

#endif
