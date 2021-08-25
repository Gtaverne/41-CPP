#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	//canon
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap (ScavTrap const &input);
	virtual ~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & rhs);

	void guardGate();
	virtual void attack(std::string const & target);

private:
	bool _guard;
	
};

#endif