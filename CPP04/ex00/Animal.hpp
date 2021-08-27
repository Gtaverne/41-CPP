#ifndef ANIMAL_HPP
# define ANIMAL_HPP


# include <iostream>

class Animal {
public:
	//canon
	Animal(void);
	Animal(Animal const &input);
	virtual ~Animal(void);
	virtual Animal & operator= (Animal const & rhs);

	virtual void makeSound();

protected:
	std::string _type;
};

#endif