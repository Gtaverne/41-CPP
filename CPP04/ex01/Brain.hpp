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

	void setIdea(int const i, std::string const str);
	std::string getIdea(int const i) const;


protected:
	std::string _ideas[100];
};

#endif