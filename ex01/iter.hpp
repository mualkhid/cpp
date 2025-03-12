#ifndef	ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Func>
void iter( T *array, size_t size, Func function) {
	for (size_t i = 0; i < size ; i++)
		function(array[i]);
}

template<typename T>
void printarray( const T &nb_) {
	std::cout << nb_ << std::endl;
}

#endif
