#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{
public:
//Canon
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator=(MateriaSource const & rhs);
	virtual ~MateriaSource();

//Class functions
	void learnMateria(AMateria* src);
	AMateria* createMateria(std::string const & type);

protected:
	AMateria* _materia_source[4];
};

#endif