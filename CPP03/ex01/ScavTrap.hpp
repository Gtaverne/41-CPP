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
	~ScavTrap(void);
	ScavTrap & operator=(ScavTrap const & rhs);

	void guardGate();

	private:
	bool _guard;
	
};

#endif