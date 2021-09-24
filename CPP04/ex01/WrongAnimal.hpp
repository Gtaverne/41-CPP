#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


# include <iostream>

class WrongAnimal {
public:
	//canon
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &input);
	~WrongAnimal(void);
	WrongAnimal & operator= (WrongAnimal const & rhs);

	std::string getType(void) const;
	void setType(std::string const newtype);

	void makeSound() const;

protected:
	std::string _type;
};

#endif