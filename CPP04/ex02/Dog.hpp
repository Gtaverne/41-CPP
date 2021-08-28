#ifndef DOG_HPP
# define DOG_HPP


# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
public:
	//canon
	Dog(void);
	Dog(Dog const &input);
	virtual ~Dog(void);
	virtual Dog & operator= (Dog const & rhs);

	virtual void makeSound() const;

	virtual std::string getType(void) const;
	virtual void setType(std::string const newtype);
	std::string getDogIdea(int) const;
	void setDogIdea(int const i, std::string const idea);

protected:
	std::string _type;
	Brain* _DogBrain;
};

#endif