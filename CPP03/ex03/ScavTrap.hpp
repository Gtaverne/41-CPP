#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	//canon
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap (ScavTrap const &input);
	virtual ~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & rhs);

	virtual void attack(std::string const & target);
	
	void guardGate();
	bool getGuardstatus(void) const;
	void setGuardstatus(bool);

protected:
	bool _guard;
	
};

#endif