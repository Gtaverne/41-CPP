#ifndef CAT_HPP
# define CAT_HPP


# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
public:
	//canon
	Cat(void);
	Cat(Cat const &input);
	virtual ~Cat(void);
	virtual Cat & operator= (Cat const & rhs);

	virtual void makeSound() const;

	virtual std::string getType(void) const;
	virtual void setType(std::string const newtype);
	std::string getCatIdea(int) const;
	void setCatIdea(int const i, std::string const idea);

protected:
	std::string _type;
	Brain* _catBrain;
};

#endif