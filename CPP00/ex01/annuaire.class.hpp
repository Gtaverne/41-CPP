#ifndef ANNUAIRE_CLASS_HPP
# define ANNUAIRE_CLASS_HPP


class member
{
	public:
	int		addcontact (int i);
	void	getline (int i);
	member (void);
	~member (void);
	int			index;
	std::string	getvalue (int val);

	private:
	void		setvalue (int val, std::string str);
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
