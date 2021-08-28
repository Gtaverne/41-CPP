#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


# include <iostream>

class WrongAnimal {
public:
	//canon
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &input);
	virtual ~WrongAnimal(void);
	virtual WrongAnimal & operator= (WrongAnimal const & rhs);

	virtual std::string getType(void) const;
	virtual void setType(std::string const newtype);

	virtual void makeSound() const;

protected:
	std::string _type;
};

#endif