#ifndef MKAY_HPP
# define MKAY_HPP

/* fstream is used to open/close */

#include <iostream>
#include <fstream>


class Wellsed {
	public:
	Wellsed(std::string, std::string, std::string);
	~Wellsed();
	bool test();
	void rockit();

	private:
	std::ifstream reader;
	std::ofstream writer;
	std::string _input;
	std::string _output;
	std::string	_tofind;
	std::string _toreplace;
	std::string _temp;
	std::string _result;
};

#endif