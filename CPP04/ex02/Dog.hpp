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

	void makeSound() const;

	std::string getDogIdea(int) const;
	void setDogIdea(int const i, std::string const idea);

private:
	Brain* _DogBrain;
};

#endif