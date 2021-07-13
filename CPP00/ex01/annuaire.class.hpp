#ifndef ANNUAIRE_CLASS_HPP
# define ANNUAIRE_CLASS_HPP

class member
{
	public:
	int		addcontact (int i);
	void	getline (int i);
	member (void);
	~member (void);
	std::string	getvalue (int val);
	void fullcontact( void );

	private:
	void		setvalue (int val, std::string str);
	std::string truncate( std::string str);
	std::string	_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

class phonebook
{
	public:
	member			list[8];
	static int 		in;
	void			bigloop(std::string buf);
	phonebook 		(void);
	~phonebook		(void);
	
	private:
	void			_addmember();
	void			_searchmember();
	void			_display( member *annuaire );
	void			_concat (std::string str);
};

void	display( member *annuaire );

#endif
