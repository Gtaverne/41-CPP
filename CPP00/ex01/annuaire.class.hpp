#ifndef ANNUAIRE_CLASS_HPP
# define ANNUAIRE_CLASS_HPP


class member
{
	public:
	int		add (int i);
	void	getline (int i);
	member (void);
	~member (void);
	void		getvalue (int val);
	void		setvalue (int val, std::string str);
	int			index;

	private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
