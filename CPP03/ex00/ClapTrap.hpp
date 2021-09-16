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
	~ClapTrap(void);
	ClapTrap & operator=(ClapTrap const & rhs);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName (void) const;
	int getHP (void) const;
	int getMP (void) const;
	int getATK (void) const;

	void setHP (int);
	void setMP (int);
	void setATK (int);

	private:
	std::string _name;
	int _hp;
	int _mp;
	int _atk;

};

std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs);


#endif