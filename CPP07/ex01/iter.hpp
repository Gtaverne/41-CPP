#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

template<typename T>
void iter (T *arr, const size_t len, void (*f)(T &) )
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

//Beware of the "const", otherwise you cannot detect f's type
template<typename T>
void iter (T *arr, const size_t len, void (*f)(const T &) )
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
