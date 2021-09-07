#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
//Canon
	Character();
	Character(Character const & src);
	Character & operator=(Character const & rhs);
	virtual ~Character();

//Getter and setters
	std::string const & getName() const;

//Class functions
	void use(int idx, ICharacter& target);
	void equip(AMateria *m);
	void unequip(int idx);

protected:
	AMateria *_mat_inventory[4];
	std::string _name;
};

#endif
