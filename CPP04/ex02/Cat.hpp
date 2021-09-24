#ifndef CAT_HPP
# define CAT_HPP


# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
public:
	//canon
	Cat(void);
	Cat(Cat const &input);
	virtual ~Cat(void);
	virtual Cat & operator= (Cat const & rhs);

	void makeSound() const;

	std::string getCatIdea(int) const;
	void setCatIdea(int const i, std::string const idea);

private:
	Brain* _catBrain;
};

#endif