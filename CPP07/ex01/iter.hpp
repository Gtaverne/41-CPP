#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

template<typename T>
void iter (T *arr, size_t len, void (* func)(T &) )
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

#endif
