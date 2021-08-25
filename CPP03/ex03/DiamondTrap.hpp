#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
	//canon
	DiamondTrap(void);
	DiamondTrap(std::string const & name);
	DiamondTrap (DiamondTrap const &input);
	virtual ~DiamondTrap(void);
	DiamondTrap & operator=(DiamondTrap const & rhs);

	void whoAmI(void);

private:
	std::string _name;
	
};

#endif