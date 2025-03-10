#ifndef	SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <inttypes.h>

struct	Data {
	std::string		testing;
};

class	Serializer {
	private :
		Serializer( void );
		Serializer( const Serializer &cpy );
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		~Serializer( void );
};

#endif