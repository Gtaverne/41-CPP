#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "Fixed.hpp"

class ScavTrap
{
	public:
	//canon
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap (ScavTrap const &input);
	~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & rhs);

	void guardGate();

	private:
	
};

#endif