#ifndef DOG_HPP
# define DOG_HPP


# include "Animal.hpp"

class Dog : public Animal {
public:
	//canon
	Dog(void);
	Dog(Dog const &input);
	virtual ~Dog(void);
	virtual Dog & operator= (Dog const & rhs);

	void makeSound() const;

private:

};

#endif