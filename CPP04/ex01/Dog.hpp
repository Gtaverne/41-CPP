#ifndef DOG_HPP
# define DOG_HPP


# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
public:
	//canon
	Dog(void);
	Dog(Dog const &input);
	virtual ~Dog(void);
	virtual Dog & operator= (Dog const & rhs);

	virtual void makeSound() const;

	virtual std::string getType(void) const;
	virtual void setType(std::string const newtype);

protected:
	std::string _type;
	Brain *_dogBrain;
};

#endif