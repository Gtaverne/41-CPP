#ifndef CAT_HPP
# define CAT_HPP


# include "Animal.hpp"

class Cat : public Animal {
public:
	//canon
	Cat(void);
	Cat(Cat const &input);
	virtual ~Cat(void);
	virtual Cat & operator= (Cat const & rhs);

	virtual void makeSound() const;
	
private:

};

#endif