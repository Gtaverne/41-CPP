#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	//canon
	WrongCat(void);
	WrongCat(WrongCat const &input);
	virtual ~WrongCat(void);
	virtual WrongCat & operator= (WrongCat const & rhs);

	virtual void makeSound() const;

	virtual std::string getType(void) const;
	virtual void setType(std::string const newtype);

protected:
	std::string _type;
};

#endif