#ifndef Cure_HPP
# define Cure_HPP

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

//Getter and setters
	std::string const & getName() const;

//Class functions
	void use(int idx, ICharacter& target);
	void equip(AMateria *m);
	void unequip(int idx);

protected:
	
};

#endif