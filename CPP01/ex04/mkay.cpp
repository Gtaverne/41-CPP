#include "mkay.hpp"


wellsed::wellsed(std::string input, std::string o, std::string n): _input(input), _tofind(o), _toreplace(n)
{
	_output = input + ".replace";
}

wellsed::~wellsed()
{

}

bool wellsed::test(void)
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


void wellsed::rockit(void)
{
	std::string line;
	while(getline(reader, line))
	{
		_temp += line;
		if (!reader.eof())
			_temp += '\n';
	}
	reader.close();

	std::size_t position;
	while ((position = _temp.find(_tofind)) != std::string::npos)
	{
		
	}	
	writer << _result;
	writer.close();
}
