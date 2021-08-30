#include "mkay.hpp"


Wellsed::Wellsed(std::string input, std::string o, std::string n): _input(input), _tofind(o), _toreplace(n)
{
	_output = input + ".replace";
}

Wellsed::~Wellsed()
{

}

bool Wellsed::test(void)
{
	if (_tofind[0] == 0)
	{
		std::cout << "STR1 is empty, we wont replace anything" << std::endl;
		return (0);
	}
	reader.open(_input);
	if (!reader.is_open())
	{
		std::cout << "Error: could not open \"" << _input << "\"" << std::endl;
		return (0);
	}
	writer.open(_output);
	if (!writer.is_open())
	{
		std::cout << "Error: could not write in \"" << _output << "\"" << std::endl;
		reader.close();
		return (0);
	}

	return (1);
}


void Wellsed::rockit(void)
{
	std::string line;
	while(getline(reader, line))
	{
		_temp += line;
		if (!reader.eof())
			_temp += '\n';
	}
	reader.close();
	if (_tofind == _toreplace)
	{
		writer << _temp;
		std::cout << "STR1 is the same as STR2, nothing to do for me" << std::endl;
		writer.close();
		return ;
	}
	std::size_t position;
	/*Explanations:
	str.find(_tofind)	: will find _tofind in str and give its FIRST position
	std::string::npos	: understand it as "EOF"
	str.substr (i,j)	: in str, it will take the substring starting at position i, of length j
	_temp.length()		: this is strlen(_temp)
	
	So the algo is :
	While there is occurences of _tofind
		1- we append to te result everything that was in _temp until the first occurence of _tofind + _toreplace
		2- we remove from _temp what we already added to _result plus the _tofind
	We concatenate the end of _temp to _result
	We write _result in writer
	*/
	while ((position = _temp.find(_tofind)) != std::string::npos)
	{
		_result = _result + _temp.substr(0, position) + _toreplace;
		_temp = _temp.substr(position + _tofind.length(), _temp.length());
	}
	_result = _result + _temp.substr(0, position);
	writer << _result;
	writer.close();
}
