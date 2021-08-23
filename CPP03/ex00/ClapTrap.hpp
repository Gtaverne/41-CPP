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

	int getHP (void) const;
	int getMP (void) const;
	int getATK (void) const;

	void setHP (int);
	void setMP (int);
	void setATK (int);

	private:
	std::string name;
	int hp;
	int mp;
	int atk;

};


#endif