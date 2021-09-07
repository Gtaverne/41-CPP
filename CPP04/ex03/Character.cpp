#include "Character.hpp"

//Canon
Character::Character()
{
	_name = "Anonymous";
	std::cout << "An anonymous character has arrived" << std::endl;
}

Character::Character(Character const & src)
{
	_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src._mat_inventory[i] != 0)
			_mat_inventory[i] = src._mat_inventory[i];
		else
			_mat_inventory[i] = NULL;
	}
	std::cout << _name << " has been created by copy" << std::endl;
}

Character & Character::operator=(Character const & rhs)
{
	_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs._mat_inventory[i] != 0)
			_mat_inventory[i] = rhs._mat_inventory[i];
		else
			_mat_inventory[i] = NULL;
	}
	return *this;
}

Character::~Character()
{
	std::cout << "You destructed "<< _name << std::endl;
}

//Getters and setters
std::string const & Character::getName() const
{
	return _name;
}

//Class function
void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || _mat_inventory[idx] == NULL)
	{
		std::cout << _name << " doesn't have a materia at index " << idx << std::endl;
		return ;
	}
	_mat_inventory[idx]->use(target);
}

void Character::equip(AMateria *m) {
	int idx = 0;
	while (_mat_inventory[idx] != NULL)
		idx++;
	if (idx > 3) {
		std::cout << _name << " has an inventory full, unequip materias first" << std::endl;
		return ;
		}
	_mat_inventory[idx] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || _mat_inventory[idx] == NULL ) {
		std::cout << _name << " already has no materia in position " << idx << std::endl;
		return ;
		}
	_mat_inventory[idx] = NULL;
}
