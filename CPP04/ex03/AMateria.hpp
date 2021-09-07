#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _materia_type;

public:
//Canon
	AMateria();
	AMateria(AMateria const & src);
	AMateria & operator=(AMateria const & rhs);
	virtual ~AMateria();

//Getter and setters
	std::string const & getType() const; //Returns the materia type

//Class functions
	AMateria(std::string const & type);
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const = 0;
};

#endif
