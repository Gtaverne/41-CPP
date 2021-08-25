#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	//canon
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap (ClapTrap const &input);
	virtual ~ClapTrap(void);
	virtual ClapTrap & operator=(ClapTrap const & rhs);

	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	std::string getName (void) const;
	int getHP (void) const;
	int getMP (void) const;
	int getATK (void) const;

	void setName (std::string);
	void setHP (int);
	void setMP (int);
	void setATK (int);

protected:
	std::string _name;
	int _hp;
	int _mp;
	int _atk;

};

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs);

#endif