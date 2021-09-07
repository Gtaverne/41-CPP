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
	void SetType(std::string &const src);

//Class functions
	AMateria(std::string const & type);
	virtual void use(ICharacter& target);
};

#endif
