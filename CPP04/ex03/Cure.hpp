#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
//Canon
	Cure();
	Cure(Cure const & src);
	Cure & operator=(Cure const & rhs);
	virtual ~Cure();

//Class functions
	Cure(std::string const & type);
	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif