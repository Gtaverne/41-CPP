#ifndef AANIMAL_HPP
# define AANIMAL_HPP


# include <iostream>

class AAnimal {
public:
	//canon
	AAnimal(void);
	AAnimal(AAnimal const &input);
	virtual ~AAnimal(void);
	virtual AAnimal & operator= (AAnimal const & rhs);

	virtual std::string getType(void) const;
	virtual void setType(std::string const newtype);

	virtual void makeSound() const = 0;

protected:
	std::string _type;
};

#endif