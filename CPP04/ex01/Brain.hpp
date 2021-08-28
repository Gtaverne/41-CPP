#ifndef BRAIN_HPP
# define BRAIN_HPP


# include <iostream>

class Brain {
public:
	//canon
	Brain(void);
	Brain(Brain const &input);
	virtual ~Brain(void);
	virtual Brain & operator= (Brain const & rhs);

	virtual std::string getType(void) const;
	virtual void setType(std::string const newtype);

	virtual void makeSound() const;

protected:
	std::string _ideas[100];
};

#endif