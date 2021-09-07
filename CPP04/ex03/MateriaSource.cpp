#include "MateriaSource.hpp"

//Canon
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia_source[i] = NULL;
	std::cout << "New source created" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
		for (int i = 0; i < 4; i++){
		if (_materia_source[i] != NULL) {
			delete _materia_source[i];
			_materia_source[i] = NULL;
		}
		if (src._materia_source[i] != NULL)
			_materia_source[i] = src._materia_source[i]->clone();
	}
	std::cout << "New default source created by copy" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++){
		if (_materia_source[i] != NULL) {
			delete _materia_source[i];
			_materia_source[i] = NULL;
		}
		if (rhs._materia_source[i] != NULL)
			_materia_source[i] = rhs._materia_source[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++){
		if (_materia_source[i] != NULL) {
			delete _materia_source[i];
		}
	}
	std::cout << "Materia source destructed" << std::endl;
}

//Getters and setters

//Class functions

void MateriaSource::learnMateria(AMateria* src)
{
	int index = 0;

	while (index < 4 && _materia_source[index] != NULL)
	{
		index++;
	}
	if (index == 4)
		std::cout << "The source is full it's not possible to add another materia" << std::endl;
	else
		_materia_source[index] = src;	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia_source[i] != NULL && _materia_source[i]->getType() == type)
		{
			std::cout << "We found a " << type << " materia in the source" << std::endl;
			return (_materia_source[i]);
		}
	}
	std::cout << "No " << type << " materia in the source" << std::endl;
	return NULL;
}
