#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
//Canon
	Ice();
	Ice(Ice const & src);
	Ice & operator=(Ice const & rhs);
	virtual ~Ice();

//Class functions
	Ice(std::string const & type);
	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif
