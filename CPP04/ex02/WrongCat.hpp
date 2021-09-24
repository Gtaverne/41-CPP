#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	//canon
	WrongCat(void);
	WrongCat(WrongCat const &input);
	~WrongCat(void);
	WrongCat & operator= (WrongCat const & rhs);

	void makeSound() const;

private:

};

#endif