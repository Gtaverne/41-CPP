#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	//canon
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap (FragTrap const &input);
	virtual ~FragTrap(void);
	FragTrap & operator=(FragTrap const & rhs);

	void highFivesGuys(void);

private:
	
};

#endif