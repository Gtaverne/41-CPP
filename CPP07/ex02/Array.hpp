#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>

template < typename T>
class Array
{
public:
	class OutOfRangeException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Element is out of limits");
			}
	};
//Canon
	Array(void) : _array(NULL), _size(0) {}
	Array(const size_t n) : _array(new T[n]), _size(n) {}
	Array(Array const & src) : _array(NULL), _size(0)
	{
		*this = src;
	}
	Array & operator=(Array const & rhs)
	{
		if (_array != 0 && _size != rhs._size)
			delete [] _array;
		this->_size = rhs._size;
		this->_array = new T[this->_size];
		for (size_t i =0; i < _size; i++)
			this->_array[i] = rhs._array[i];
		return *this;
	}
	~Array()
	{
		if (this->_array)
			delete [] _array;
		_size = 0;
		std::cout << "Destructor called" << std::endl;
	}

//Member functions
	T & operator [] (unsigned int const index)
	{
		if (index >= _size)
			throw OutOfRangeException();
		else
			return (_array[index]);
	}

	size_t size() const {return _size;}


private:
	T *_array;
	size_t _size;
};

template<typename T>
std::ostream & operator<<( std::ostream &o, Array<T> &arr) {
	std::cout << "Array : ";
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	return (o);
}

#endif